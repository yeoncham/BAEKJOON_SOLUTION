#include <stdio.h>

typedef struct xy {
	int x;
	int y;
}XY;

int main()
{
	int i, j, k;
	int N, S = 0;
	int paper[100][100] = { 0, };
	XY* p;
	scanf("%d", &N);
	p = calloc(N, sizeof(XY));
	for (i = 0; i < N; i++)
		scanf("%d %d", &(p + i)->x, &(p + i)->y);
	for (i = 0; i < N; i++)
		for (j = p[i].y; j < p[i].y + 10; j++)
			for (k = p[i].x; k < p[i].x + 10; k++)
				if (paper[k][j] == 0)
				{
					paper[k][j] = 1;
					S += 1;
				}
	printf("%d", S);
	free(p);
	return 0;
	//for (i = 0; i < N; i++)
	//printf("%d %d\n", p[i].x, p[i].y);

}
