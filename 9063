#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, N, xmin = 10001, ymin = 10001, xmax = -10001, ymax = -10001;
	int NUMX[100001];
	int NUMY[100001];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d %d", &NUMX[i], &NUMY[i]);
	for (i = 0; i < N; i++)
	{
		if (NUMX[i] < xmin)
			xmin = NUMX[i];
		if (NUMX[i] > xmax)
			xmax = NUMX[i];
		if (NUMY[i] < ymin)
			ymin = NUMY[i];
		if (NUMY[i] > ymax)
			ymax = NUMY[i];
	}
	printf("%d", (xmax - xmin) * (ymax - ymin));
	return 0;

}
