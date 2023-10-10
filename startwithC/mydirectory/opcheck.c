#include <stdio.h>
int main()
{   char *p;
    int *q;
    float *r;
    char c = 'A';
    int i = 34;
    float f = 3.4;
    p = &c;
    q = &i;
    r =&f;
    printf("%u,%u,%u\n",&c,&i,&f);
    printf("%p,%p,%p\n",&c,&i,&f);
    printf("char: %d, int: %d, float: %d",sizeof(p),sizeof(q),sizeof(r));
    return 0;
}