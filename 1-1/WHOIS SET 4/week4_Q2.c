#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m[16] = { 0 };
	int t, i = 0,j;
	while (1)
	{
		scanf("%d", &t);
		if (!t)
			break;
		if (t == 45)
		{
			m[--i] = 0;
			continue;
		}
		m[i] = t;
		i++;
	}
	for (j = 0; j <= i; ++j)
		printf("%c", (char)m[j]);
	return 0;
}