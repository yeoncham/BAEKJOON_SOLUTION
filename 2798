#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, k, N, M, sum = 0, max = 0;
	int* x;
	scanf("%d %d", &N, &M);
	x = calloc(N, sizeof(int));
	for (i = 0; i < N; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < N - 2; i++)
		for (j = i + 1; j < N - 1; j++)
			for (k = j + 1; k < N; k++)
			{
				sum = x[i] + x[j] + x[k];
				if (sum > max && sum <= M)
					max = sum;	
			}
	printf("%d\n", max);
	free(x);
	return 0;
}
