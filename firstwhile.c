// prg.c
#include<stdio.h>
#include<conio.h>
void main()
{
    int i , sum = 0;
    for(i=0; i <= 10; i++)
    {
        sum = sum + i;
        printf("\n%d",sum);
        if(i == 5)
        {
            goto l1;
        }
    }
    l1:
    printf("\n%d", sum);
    getch();
}
