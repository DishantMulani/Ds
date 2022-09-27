#include <stdio.h>
#include <stdlib.h>
int i, j;
void print(int a[], int n)
{
    for (i = 0; i < n; i++) // print input/output array
    {
        printf("%d  ", a[i]);
    }
}
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int partition(int a[], int l, int u)
{
    int pivot = a[l];
    i = l + 1;
    j = u;
    do
    {
        while (pivot >= a[i])
        {
            i++;
        }
        while (pivot < a[j])
        {
            j--;
        }
        if (i < j)
        {
            swap(a, i, j); // swap if i & j not cross each other
        }
    } while (i < j);
    swap(a, l, j); // swap if i & j cross each other
    return j;
}
void quicksort(int a[], int l, int u, int n)
{
    int str; // for store return j
    if (l < u)
    {
        str = partition(a, l, u);
        printf("\n");
        print(a, n);
        quicksort(a, l, str - 1, n); // before mid //both running equal level
        quicksort(a, str + 1, u, n); // after mid
    }
}
void main()
{
    int n;
    printf("Enter Size Of Array : ");
    scanf("%d", &n);
    int a[n];
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    print(a, n);
    printf("\n");
    quicksort(a, 0, n - 1, n);
    printf("\n\n");
    print(a, n);
}