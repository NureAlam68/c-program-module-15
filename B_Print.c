// Given a number N. Print all numbers from 1 to N.
#include <stdio.h>
int print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%d", i); 
        else
            printf("%d ", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}