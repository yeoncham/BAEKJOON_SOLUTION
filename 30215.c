#include <stdio.h>
int main()
{
	int i, j;
	int O, A, K;
	scanf("%d %d %d", &O, &A, &K);
	if (O % A == 0)
	{
		for (i = 1; i < O / A; i++)
			for (j = 1; j <= A; j++)
			{
				if (O == A * i + K * j)
				{
					printf("1");
					return 0;
				}

			}
		if (i == O / A && j == A + 1)
			printf("0");
		return 0;
	}
	else
	{
		for (i = 1; i <= O / A; i++)
			for (j = 1; j < A; j++)
			{
				if (O == A * i + K * j)
				{
					printf("1");
					return 0;
				}

			}
		if (i == O / A + 1 && j == A)
			printf("0");
		return 0;
	}
}
