#include <stdio.h>
void swap(int,int);
void swapptr(int*,int*);
int main()
{
    int a = 19;
    int b = 43;
    swap(a,b);
    printf("\n outside a is %d, b is %d \n",a,b);
    swapptr(&a,&b);
    printf("\n outside a is %d, b is %d",a,b);

}
void swap(int p, int q)
{
    int t;
    t = p;
    p = q;
    q = t;
    printf("a is %d, b is %d \n",p,q);
}
void swapptr(int *p,int *q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
    printf("\n inside swap pointer a is %d, b is %d",*p,*q);
}