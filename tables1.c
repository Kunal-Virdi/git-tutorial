// creating a table of 2 till 10
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    for( a = 2; a<=10; a++)
    {
        for( b = 1; b<=10; b++)
        {
        printf("\n %d x %d = %d",a,b,a*b);
        }
        printf("\n");
    }
    getch();
}
