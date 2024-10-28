#include <stdio.h>

int main()
{
	int a1, a0, c, n0;
	scanf("%d %d", &a1, &a0);
	scanf("%d", &c);
	scanf("%d", &n0);
	if (c * n0 - a1 * n0 - a0>= 0 && c >= a1)
		putchar('1');
	else
		putchar('0');
	return 0;
}
