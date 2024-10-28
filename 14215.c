#include <stdio.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;}while(0)
int main()
{
	int a, b, c, i, j, x[3] = { 0, };
	scanf("%d %d %d", &a, &b, &c);
	x[0] = a, x[1] = b, x[2] = c;
	for (i = 0; i < 2; i++)
		for (j = 2; j > 0; j--)
			if (x[j - 1] > x[j])
				swap(int, x[j - 1], x[j]);
	while (x[0] + x[1] <= x[2])
		x[2]--;
	printf("%d", x[0] + x[1] + x[2]);
 return 0;
}
