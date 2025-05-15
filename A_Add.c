// Given two numbers X and Y, Print their summation.
#include <stdio.h>
int add(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int result = add(x, y);
    printf("%d", result);
    return 0;
}