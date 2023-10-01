#include <stdio.h>
int main()
{
	int i, T, C;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		int quarter = 0, dime = 0, nickel = 0, penny = 0;;
		scanf("%d", &C);
		if (C / 25 != 0){
			quarter = C / 25;
			C = C % (quarter * 25);
		}
		if (C / 10 != 0){
			dime = C / 10;
			C = C % (dime * 10);
		}
		if (C / 5 != 0)	{
			nickel = C / 5;
			C = C % (nickel * 5);
		}
		penny = C;
		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}
	return 0;
}
