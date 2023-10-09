#include <stdio.h>
int main()
{
	int N, i, j, cnt = 0;
	int* x;
	scanf("%d", &N);
	x = calloc(N, sizeof(int));
	for (i = 0; i < N; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < N; i++)
	{
		if (x[i] == 2)
		{
			cnt++;
			continue;
		}
		for (j = 2; j < x[i]; j++)
			if (x[i] % j == 0)
				break;
		if (j == x[i])
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
