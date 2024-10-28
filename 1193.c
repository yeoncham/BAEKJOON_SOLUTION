#include <stdio.h>

int main()
{
	int N, i = 0 , k = 1;
	scanf("%d", &N);
	while (1)
	{
		i = i + k;
		if (N <= i)
			break;
		k++;
	}
	if (k % 2 == 0)
		printf("%d%c%d", k - i + N, '/', i - N + 1);
	else
		printf("%d%c%d", i - N + 1, '/', k - i + N);
	return 0;
}
