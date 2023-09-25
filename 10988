#include <stdio.h>
#include <string.h>
int main()
{
	int i, len;
	char word[101];
	scanf("%s", word);
	len = strlen(word);
	for (i = 0; i < len / 2; i++)
	{
		if (word[i] != word[len - i - 1])
		{
			printf("0");
			break;
		}
	}
	if (i == len / 2)
		printf("1");
	return 0;
}
