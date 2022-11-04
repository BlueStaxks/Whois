#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, q, w, t = 0, c = 0;
	scanf("%d %d %d", &n, &q, &w);
	while (++c)
	{
		t += q;
		if (t >= n)
		{
			printf("%d", c);
			return 0;
		}
		t -= w;
	}
}