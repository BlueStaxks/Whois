#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int m[100000] = { 0 };
int main()
{
	char t, i = 0, j, s = 7;
	while (1)
	{
		scanf("%c", &t);
		if (t == '\n')
			break;
		if (t == '$')
			m[i] = 1;
		i++;
	}
	while (s < i)
		s += 7;
	for (j = i; j >= 0; --j)
		m[j + s - i] = m[j];
	for (j = 0; j < s - i; ++j)
		m[j] = 0;
	for (j = 6; j < s; j += 7)
	{
		int k = 0;
		for (i = 0; i < 7; ++i)
			k += m[j - i] * (1 << i);
		printf("%c", k);
	}
}
//�°� ���� �� �غý��ϴ�.........................................
//char �� 8��Ʈ�� 8���� �������� ���� 127�� �Ѿ������ MSB������ ����ϸ� ���� �ȳ����� �ں��� �о�� �պ��� �о�� �ϴٰ�
//�ᱹ 7���� �ڸ��°ſ�����..
//����