#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char* result(char* sequence, int* nucleic)
{
    int i;
    for(i=0; i<10; ++i)//0
    {
        if(*(nucleic+i)==0) *(sequence+i)='A';
        if(*(nucleic+i)==1) *(sequence+i)='T';
        if(*(nucleic+i)==2) *(sequence+i)='G';
        if(*(nucleic+i)==3) *(sequence+i)='C';
    }
    for(i=0; i<10; ++i)//1
    {
        if(*(sequence+i)=='A')  *(sequence+i)='T';
        else if(*(sequence+i)=='T') *(sequence+i)='A';
        else if(*(sequence+i)=='G') *(sequence+i)='C';
        else if(*(sequence+i)=='C') *(sequence+i)='G';
    }
    for(i=0; i<10; ++i)//2
    {
        if(*(sequence+i)=='A')  *(sequence+i)='A';
        else if(*(sequence+i)=='T') *(sequence+i)='U';
        else if(*(sequence+i)=='G') *(sequence+i)='G';
        else if(*(sequence+i)=='C') *(sequence+i)='C';
    }
    *(sequence+i)='\0';
    //puts(sequence);
    return sequence;
}
int main()
{
    int nucleic[10];
    char sequence[5][11];
    char rna[5][11];
    int i,j;
    for(i=0; i<5; ++i)
    {
        for(j=0; j<10; ++j)
            scanf("%d", nucleic+j);
        strcpy(rna+i, result(sequence+i, nucleic));
    }
    for(i=0; i<5; ++i)
        puts(rna+i);
    return 0;
}
