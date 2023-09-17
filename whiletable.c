#include<stdio.h>
#include<conio.h>
// can't use nested while during dowhile;)
void main()
{
    int a=2,b=1;
    do
    {
        printf("/n Table of %d",a);
    }while(a<=10)
    ;{
        while(b<=10)
        {
            printf("\n %d x %d = %d",a,b,a*b);
            b++;
        }
        a++;
    }
    getch();
}   