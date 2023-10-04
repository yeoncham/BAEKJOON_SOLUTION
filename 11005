#include <stdio.h>
#include <string.h>

int main()
{
	int i, N, B;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char d[31] = { 0 ,};
	scanf("%d %d", &N, &B);
	i = 0;
	while (N >= B)
	{
		d[i] = dchar[N % B];
		N /= B;
		i++;
	}
	d[i] = dchar[N];
	for (i = strlen(d) - 1; i >= 0; i--)
		printf("%c", d[i]);
	return 0;
}
