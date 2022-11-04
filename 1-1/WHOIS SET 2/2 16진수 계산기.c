#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%x %x", &a, &b);
	printf("%x\n", a + b);
	printf("%x\n", a - b);
	printf("%x\n", a * b);
	printf("%lf\n", (double)a / (double)b);
	printf("%x\n", a % b);
	return 0;
}