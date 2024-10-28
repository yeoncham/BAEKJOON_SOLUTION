#include <stdio.h>

int main()
{
	int i, temp, N, sum;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		sum = i;
		temp = i;
		while (temp != 0)
		{
			sum = sum + (temp % 10);
			temp = temp / 10;
		}
		if (N == sum)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}
