#include <stdio.h>
#include <stdlib.h>
int i, n;
void print(int a[], int n)
{
    for (i = 0; i < n; i++) // print input/output array
    {
        printf("%d  ", a[i]);
    }
}
void merge(int a[], int l, int m, int mi, int u)
{
    int b[50]; // new array for sorting
    int i = l, j = mi, k = 0;
    while (i <= m && j <= u)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= m)
        b[k++] = a[i++];
    while (j <= u)
        b[k++] = a[j++];
    for (i = l, j = 0; i <= u; i++, j++) // copy in old array
        a[i] = b[j];
}
void mergesort(int a[], int lb, int ub, int n)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergesort(a, lb, mid, n);       // before mid //both running equal level
        mergesort(a, mid + 1, ub, n);   // after mid
        merge(a, lb, mid, mid + 1, ub); // all sort complete than this rec called
        printf("\n");
        print(a, n);
    }
}
int main()
{
    int n, i;
    printf("Enter Size Of Array = ");
    scanf("%d", &n);
    int a[n];
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    print(a, n);
    printf("\n");
    mergesort(a, 0, n - 1, n);
    printf("\n\n");
    print(a, n);
    return 0;
}