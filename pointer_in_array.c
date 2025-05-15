#include <stdio.h>
int main()
{
    int a[5] = {10, 20 , 30 ,40, 50};
    printf("%p\n", &a[0]);
    printf("%p\n", a);
    printf("%d\n", *a);
    *a = 100;
    *(a+2) = 200;

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}