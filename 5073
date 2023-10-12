#include <stdio.h>
#define swap(type, x, y) do{type t = x; x = y; y = t;}while(0)

int main()
{
	int i, j;
	int x[3] = { 0, };
	while (1)
	{
		scanf("%d %d %d", &x[0], &x[1], &x[2]);
		if (x[0] == 0 && x[1] == 0 && x[2] == 0)
			break;
		for (i = 0; i < 2; i++)
			for (j = 2; j > 0; j--)
				if (x[j - 1] > x[j])
					swap(int, x[j - 1], x[j]);
		if (x[0] + x[1] <= x[2])
			printf("Invalid\n");
		else if (x[0] == x[1] && x[0] == x[2])
			printf("Equilateral\n");
		else if (x[0] != x[1] && x[0] != x[2] && x[1] != x[2])
			printf("Scalene\n");
		else
			printf("Isosceles\n");
	}
	return 0;
}
