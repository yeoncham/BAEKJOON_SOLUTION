#include <stdio.h>
#include <string.h>

typedef struct subject {
	char SubjectName[51];
	char grade[3];
	float credit;
}SUBJECT;

float GradeNumber(char a[])
{
	if (a[0] == 'A' && a[1] == '+')
		return 4.5;
	else if (a[0] == 'A' && a[1] == '0')
		return 4.0;
	else if (a[0] == 'B' && a[1] == '+')
		return 3.5;
	else if (a[0] == 'B' && a[1] == '0')
		return 3.0;
	else if (a[0] == 'C' && a[1] == '+')
		return 2.5;
	else if (a[0] == 'C' && a[1] == '0')
		return 2.0;
	else if (a[0] == 'D' && a[1] == '+')
		return 1.5;
	else if (a[0] == 'D' && a[1] == '0')
		return 1.0;
	else
		return 0.0;
}
int main()
{
	SUBJECT one[20];
	int i;
	float sum = 0.0, sum_grade = 0.0;
	for (i = 0; i < 20; i++)
	{
		scanf("%s %f %s", &one[i].SubjectName, &one[i].credit, &one[i].grade);
		if (strcmp(one[i].grade, "P") == 0)
			continue;
		sum += GradeNumber(one[i].grade) * one[i].credit;
		sum_grade += one[i].credit;
	}
	printf("%f", sum /sum_grade);
	return 0;
}
