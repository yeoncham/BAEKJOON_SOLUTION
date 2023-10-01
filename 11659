#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* x;
	int N, M, i, j, k;
	scanf("%d %d", &N, &M);
	x = calloc(N + 1, sizeof(int));
	x[0] = 0;
	for (k = 1; k <= N; k++)
		scanf("%d", &x[k]);
	for (k = 1; k <= N; k++)
		x[k] += x[k - 1];
	for (k = 0; k < M; k++)
	{
		scanf("%d %d", &i, &j);
		printf("%d\n", x[j] - x[i - 1]);
	}
	free(x);
	return 0;
}
