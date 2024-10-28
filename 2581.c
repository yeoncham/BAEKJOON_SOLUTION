#include <stdio.h>
int main()
{
	int i, j, cnt, N, M, result = 0, min = 0;
	scanf("%d %d", &N, &M);
	for (i = N; i <= M; i++)
	{
		cnt = 0;
		for (j = 1; j <= i; j++)
			if (i % j == 0)
				cnt++;
		if (cnt == 2)
		{
			result += i;
			if (min == 0)
				min = i;
		}
	}
	if (result == 0)
		printf("-1");
	else
		printf("%d\n%d", result, min);
	return 0;

}
