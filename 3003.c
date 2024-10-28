#include <stdio.h>

int main()
{
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	int have[6];
	int i;
	for (i = 0; i < 6; i++)
		scanf("%d", &have[i]);
	for (i = 0; i < 6; i++)
		printf("%d ", chess[i] - have[i]);
	return 0;
}
