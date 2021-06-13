#include "string.h"
#include "stdlib.h"
#include "stdio.h"

int main(void)
{
    int *a, *b;
    a = (int *)1;
    b = (int *)1;
    printf("%d %d %d\n", a + (int)b, (int)(a + (int)b), (int)a + (int)b); 
    a = (int *)0x5566;
    b = (int *)0x5570;

    printf("%d %d %d %d %d\n", a, b, (int)a+(int)b, a+(int)b, sizeof(int *));
    printf("%d\n", a - b);
    printf("%d\n", ((int)b - (int)a)/sizeof(int *));

    a = (int*)0x1000;
    b = a + 3;
    printf("%d %d %p %p \n", a, b, a, b);

    system("pause");
    return 0;
}
