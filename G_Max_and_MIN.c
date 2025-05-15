// Given an array A of size N. Print the minimum and the maximum number in the array.
#include <stdio.h>

void findMinMax(int a[], int n)
{
    int min = a[0], max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d %d\n", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    findMinMax(a, n);
    return 0;
}