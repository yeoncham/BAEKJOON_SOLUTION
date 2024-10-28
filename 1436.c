#include <stdio.h>

int main()
{
	int i = 0, N, M = 666, temp, cnt = 0;
	scanf("%d", &N);
	while (1)
	{
		temp = M;
		while (temp != 0)
		{
			if (temp % 10 == 6)
			{
				cnt++;
				if (cnt == 3)
				{
					i++;
					break;
				}
			}
			else
				cnt = 0;
			temp = temp / 10;
		}
		if (i == N)
		{
			printf("%d\n", M);
			return 0;
		}
		cnt = 0;
		M++;
	}
}
