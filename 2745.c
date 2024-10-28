#include <stdio.h>
#include <string.h>
int ChangeToTen(char N[], int B)
{
	int i, j;
	int pos = 1;
	int sum = 0;
	for (i = 1; i < strlen(N); i++)
		pos *= B;
	i = 0;
	while (N[i])
	{
		if (N[i] >= 'A')
			sum = sum + ((N[i] - 'A') + 10) * pos;
		else
			sum = sum + (N[i] - '0') * pos;
		pos /= B;
		i++;
	}
	return sum;
}
int main()
{
	char N[36];
	int B;
	scanf("%s %d", N, &B);
	printf("%d", ChangeToTen(N, B));
	return 0;
}
