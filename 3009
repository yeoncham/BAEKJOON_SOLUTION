#include <stdio.h>

int main()
{
	int x[3], y[3];
	int nx[1000] = { 0, }, ny[1000] = { 0, };
	int i, j;
	for (i = 0; i < 3; i++)
		scanf("%d %d", &x[i], &y[i]);
	for (i = 0; i < 3; i++)
	{
		nx[x[i]]++;
		ny[y[i]]++;
	}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (nx[x[i]] == 1 && ny[y[j]] == 1)
				printf("%d %d", x[i], y[j]);
	return 0;
}
