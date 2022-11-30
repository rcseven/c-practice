#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int i, int k)
{
    return i < k ? i : k;
}

int max(int i, int k)
{
    return i > k ? i : k;
}

int main()
{
    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int t;
    for (int i = 0; i < (n * 2 - 1); i++)
    {
        for (int k = 0; k < (n * 2 - 1); k++)
        {
            t = ((i + k) <= (2 * n - 2)) ? n - min(i, k) : max(i, k) + 2 - n;
            printf("%d ", t);
        }
        printf("\n");
    }

    return 0;
}