#include <stdio.h>
int main()
{
	int i, N, sum, ptr;
	int* x;
	while(1)
	{
		scanf("%d", &N);
		if (N == -1)
			break;
		sum = 0;
		ptr = 0;
		x = calloc(N, sizeof(int));
		for (i = 1; i <= N / 2; i++)
			if (N % i == 0)
			{
				sum += i;
				x[ptr++] = i;
			}
		if (sum == N)
		{
			printf("%d = ", N);
			for (i = 0; i < ptr - 1; i++)
				printf("%d + ", x[i]);
			printf("%d", x[ptr - 1]);
			putchar('\n');
		}
		else
			printf("%d is NOT perfect.\n", N);
		free(x);
	}
	return 0;
}
