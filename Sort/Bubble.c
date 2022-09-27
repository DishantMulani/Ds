#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, j, t;
    printf("\nEnter Size Of Array : ");
    scanf("%d", &n);
    int a[n];
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    for (i = 0; i < n; i++) // print input array
    {
        a[i] = rand() % 100;
        printf("%d  ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("\n\n");
    for (i = 0; i < n; i++) // print output array
    {
        printf("%d  ", a[i]);
    }
}