// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     printf("%d\n", x);
//     printf("%p\n", &x);

//     int* ptr;
//     ptr = &x;
//     printf("%p\n", ptr);
//     printf("%p\n", &ptr);
//     return 0;
// }

//  dereferencing a pointer
#include <stdio.h>
int main()
{
    int x = 100;
    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr;
    ptr = &x;
    *ptr = 200;
    printf("%d", x);
    return 0;
}