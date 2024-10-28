#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M, i, j, k = 0;
	int A[101][101], B[101][101];
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			scanf("%d", &A[i][j]);
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			scanf("%d", &B[i][j]);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			printf("%d ", A[i][j] + B[i][j]);
		putchar('\n');
	}
	return 0;
}
