#include <stdio.h>
#include <string.h>
int main()
{
	
	int i = 0, j, k, idx, cnt = 0;
	char string[101];
	char croatia[8][4] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	scanf("%s", string);
	while (string[i])
	{
		for (j = 0; j < 8; j++)
		{
			for (k = 0; k < strlen(croatia[j]); k++)
			{
				if (string[i + k] != croatia[j][k])
					break;
				else 
					continue;
			}
			if (k == strlen(croatia[j]))
			{
				cnt++;
				i += strlen(croatia[j]);
				break;
			}
		}
		if (j == 8)
		{
			cnt++;
			i++;
		}
	}
	printf("%d", cnt);
    return 0;
}
