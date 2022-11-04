#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, i = 0;
	int m[10000] = {0};
	scanf("%d", &a);
	while (a > 0)
	{
		m[i] = a % 256;
		a /= 256;
		i++;
	}
	for (; i >= 0; --i)
		printf("%x ", m[i]);
	return 0;
}