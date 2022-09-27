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
    for (i = 1; i < n; i++)
    {
        t = a[i];
        j = i - 1;
        while (t < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
    }
    printf("\n\n");
    for (i = 0; i < n; i++) // print outputs array
    {
        printf("%d  ", a[i]);
    }
}