#include <stdio.h>
int *fun(int *num);
int main()
{
    int max, *p,i;
    p = fun(&max);
    for(i=0; i < max; i++){
        printf("%d",p[i]);
    }
    return 0;
}
int *fun(int *num)
{
    static int arr[] = {1,2,3,4,5,6};
    *num = sizeof(arr)/sizeof(arr[0]);
    return arr;
}