#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long q = 0;
	float w = 0, e = 0, r = 0;
	scanf("%d;%f,%f,%f", &q, &w, &e, &r);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", q, w, e, r);
	return 0;
}