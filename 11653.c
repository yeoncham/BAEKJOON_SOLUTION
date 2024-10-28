#include <stdio.h>

int main()
{
	int i = 2, N;
	scanf("%d", &N);
	while (1)
	{
		while (N % i == 0)
		{
			printf("%d\n", i);
			N /= i;
		}
		i++;
		if (N == 1)
			return 0;
	}
}
