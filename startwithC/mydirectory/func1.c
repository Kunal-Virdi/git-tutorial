#include <stdio.h>
int sum1(int, int);
int greater(int, int);
int main()
{   int a,b;
    printf("Enter 1 number: ");
    scanf("%d",&a);
    printf("\nenter 2 number: ");
    scanf("%d",&b);
    printf(" a is %d and b is %d",a,b);
    int i;
    printf("\nEnter 1 to get sum");
    printf("\nEnter 2 to get greater");
    scanf("%d",&i);
    switch (i)
    {
    case /* constant-expression */1:
        /* code */printf("\n sum is: %d",sum1(a,b));
        break;
    case 2:
        printf("greater is: %d",greater(a,b));
        break;
    default:
        printf("enter a number from the given menu!");
        break;
    }
    
    return 0;
}
int sum1(int p, int q)
{
    int sum = p+q;
    return sum;
}
int greater(int p, int q)
{
    int max = 0;
    if(p>q){
        max = p;
        return max;
    }
    else if(q>p){
        max = q;
        return max;
    }
    else{
    printf(" both are equal");
    }
    return 0;
}