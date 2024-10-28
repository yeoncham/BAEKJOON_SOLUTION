#include <stdio.h>

int main()
{
	int N, temp, min = 1667;
	int share5, share3, remain3;
	scanf("%d", &N);
	temp = N;
	for (share5 = 0; share5 <= N / 5; share5++)
	{
		N = N - share5 * 5;
		share3 = N / 3;
		if (N % 3 == 0 && min > share5 + share3)
			min = share5 + share3;
		N = temp;
	}
	if (min == 1667)
		printf("-1\n");
	else
		printf("%d\n", min);
	return 0;
}
