#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void check(int *x, int *y, int *p1, int *p2)
{
    *p1=*x+*y;
    *p2=*x-*y;
}
int main()
{
    int x,y;
    int r1,r2;
    int*p1=&r1, *p2=&r2;
    scanf("%d %d", &x,&y);
    check(&x,&y,p1,p2);
    printf("%d %d", r1,r2);
    return 0;
}
