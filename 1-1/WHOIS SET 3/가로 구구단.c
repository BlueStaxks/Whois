#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, i, j;
	scanf("%d", &a);
	for (i = 1; i <= 9; ++i)
	{
		for (j = 1; j <= a; ++j)
			printf("%d x %d = %d ", j, i, j * i);
		printf("\n");
	}
	return 0;
}