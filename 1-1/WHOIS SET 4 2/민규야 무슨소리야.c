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
//온갖 짓을 다 해봤습니다.........................................
//char 는 8비트라 8개로 나눴더니 값이 127을 넘어버리고 MSB버리고 계산하면 답이 안나오고 뒤부터 읽어보고 앞부터 읽어보고 하다가
//결국 7개씩 자르는거였군요..
//에잉