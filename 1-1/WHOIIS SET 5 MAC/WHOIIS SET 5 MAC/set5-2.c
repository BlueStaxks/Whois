#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct button
{
    int stat;
    int count;
};
struct player
{
    char name[100];
    int x;
    int y;
    int hp;
    int mp;
};
struct controller
{
    int battery;
    char move;
};
void playerStatus(struct player *p) //고정
{
    printf("플레이어 이름 : %s\n", p->name);
    printf("HP : %d\n", p->hp);
    printf("MP : %d\n", p->mp);
    printf("현재 위치 : (%d, %d)\n", p->x, p->y);
}
void pressButton(struct button *btn)
{
    (*btn).count++;
    (*btn).stat=1;
}
void moveX(struct player *p, int x)
{
    (*p).x+=x;
}
void moveY(struct player *p, int y)
{
    (*p).y+=y;
}
void heal(struct player *p)
{
    if((*p).mp<5)
        printf("Not enought MP\n");
    else
    {
        (*p).mp-=5;
        (*p).hp+=10;
    }
}
void fireball(struct player *p)
{
    if((*p).mp<20)
        printf("Not enought MP\n");
    else
        (*p).mp-=20;
}
void pressUp(struct controller *con, struct player *pla)
{
    moveY(pla, 5);
    (*con).battery--;//배터리--;
    if(!(*con).battery)
    {
        printf("Power off!\n");
        exit(0);
    }//배터리 0되면 exit, Power off! 출력
}
void pressDown(struct controller *con, struct player *pla)
{
    moveY(pla, -5);
    (*con).battery--;//배터리--;
    if(!(*con).battery)
    {
        printf("Power off!\n");
        exit(0);
    }//배터리 0되면 exit, Power off! 출력
}
void pressLeft(struct controller *con, struct player *pla)
{
    moveX(pla, -5);
    (*con).battery--;//배터리--;
    if(!(*con).battery)
    {
        printf("Power off!\n");
        exit(0);
    }//배터리 0되면 exit, Power off! 출력
}
void pressRight(struct controller *con, struct player *pla)
{
    moveX(pla, 5);
    (*con).battery--;//배터리--;
    if(!(*con).battery)
    {
        printf("Power off!\n");
        exit(0);
    }//배터리 0되면 exit, Power off! 출력
}
void pressA(struct controller *con, struct player *pla)
{
    heal(pla);
    (*con).battery--;//배터리--;
    if(!(*con).battery)
    {
        printf("Power off!\n");
        exit(0);
    }//배터리 0되면 exit, Power off! 출력
}
void pressB(struct controller *con, struct player *pla)
{
    fireball(pla);
    (*con).battery--;//배터리--;
    if(!(*con).battery)
    {
        printf("Power off!\n");
        exit(0);
    }//배터리 0되면 exit, Power off! 출력
}
void initButton(struct button *btn)
{
    (*btn).count=0;
    (*btn).stat=0;
}
void initPlayer(struct player *p)
{
    scanf("%s", (*p).name);
    (*p).x=0;
    (*p).y=0;
    (*p).hp=100;
    (*p).mp=100;

}
void initCon(struct controller *con)
{
    scanf("%d", &(*con).battery);
    char t;
    scanf("%c", &t);
}
int main()
{
    struct button but;
    struct player pla;
    struct controller con;
    initButton(&but);
    initPlayer(&pla);
    initCon(&con);
    char t;
    while(1)
    {
        scanf("%c", &t);
        con.move=t;
        if(t=='X')
        {
            playerStatus(&pla);
            return 0;
        }
        pressButton(&but);
        if(t=='U')
            pressUp(&con, &pla);
        if(t=='D')
            pressDown(&con, &pla);
        if(t=='L')
            pressLeft(&con, &pla);
        if(t=='R')
            pressRight(&con, &pla);
        if(t=='A')
            pressA(&con, &pla);
        if(t=='B')
            pressB(&con, &pla);
        but.stat=0;
    }
}
