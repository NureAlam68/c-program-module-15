// Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.
#include <stdio.h>

void sortAndPrint(int a, int b, int c)
{
    int x = a, y = b, z = c;

    // Ascending sort using simple comparisons (like bubble sort for 3 elements)
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    if (x > z)
    {
        int temp = x;
        x = z;
        z = temp;
    }
    if (y > z)
    {
        int temp = y;
        y = z;
        z = temp;
    }

    // Print sorted values
    printf("%d\n%d\n%d\n\n", x, y, z);

    // Print original values
    printf("%d\n%d\n%d\n", a, b, c);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sortAndPrint(a, b, c);
    return 0;
}
