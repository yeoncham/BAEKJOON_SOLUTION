#include <stdio.h>
#include <string.h>


int IsGroupWord(char a[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = n - 1; j > i; j--)
		{
			if (a[i] == a[j])
			{
				if (a[i] != a[j - 1])
					return 0;
			}
			else
				continue;
		}
	return 1;
}
int main()
{
	int i, N, len;
	int cnt = 0;
	char word[101];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", word);
		len = strlen(word);
		if (IsGroupWord(word, len) == 1)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
