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
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\n\n");
    for (i = 0; i < n; i++) // print output array
    {
        printf("%d  ", a[i]);
    }
}