#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int plus(int a, int b)
{
	return a + b;
}
int minus(int a, int b)
{
	return a - b;
}
int multiple(int a, int b)
{
	return a * b;
}
double divide(int a, int b)
{
	return (double)a / (double)b;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", plus(a, b));
	printf("%d\n", minus(a, b));
	printf("%d\n", multiple(a, b));
	printf("%lf\n", divide(a, b));
	return 0;
}