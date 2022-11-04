#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char m[10000] = { "" };
	char t;
	int i = 0, j;
	while (1)
	{
		scanf("%c", &t);
		if (t == '\n')
			break;
		if ((int)t >= 0 && (int)t < 128)
			continue;
		m[i] = t;
		i++;
	}
	for (j = 0; j < (i / 2) - 1; j += 2)
	{
		if (m[j] != m[i - 2 - j] || m[j + 1] != m[i - 1 - j])
		{
			printf("No");
			return;
		}
	}
	printf("Yes");
	return 0;
}
// c파일은 CP949, EUC-KR로 저장되어 한글을 한 글자를 2바이트로 생각한다.
// UTF-8로 저장되었다면 한글 한 글자를 3바이트로 생각해야 한다.