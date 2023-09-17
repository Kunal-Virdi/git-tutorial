#include <stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a number: \n");
    scanf("%d", & a);
    if(a %2 == 0)
    printf("it is an even number \n");
    else if(a%2 != 0)
    printf("it is an odd number \n");
    getch();
}
