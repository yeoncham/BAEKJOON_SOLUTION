#include <stdio.h>

int main()
{
	int i, j, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - i - 1; j++)
			printf(" ");
		for (j = 0; j < 2 * i + 1; j++)
			printf("*");
		putchar('\n');
	}
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j <= i; j++)
			printf(" ");
		for (j = 2 * (N - i) - 3; j > 0; j--)
			printf("*");
		
		putchar('\n');
	}
	return 0;
}
