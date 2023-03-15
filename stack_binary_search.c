#include <stdio.h>
#include <conio.h>
#define size 10
int val, l, u, i;
int binary(int a[])
{
    int mid;
    printf("Enter Value : ");
    scanf("%d", &val);
    while (l <= u)
    {
        mid = (l + u) / 2;
        if (a[mid] == val)
            return mid + 1;
        else if (a[mid] < val)
            l = mid + 1;
        else if (a[mid] > val)
            u = mid - 1;
    }
    return -1;
}
int main()
{
    int a[size] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, rem;
    for (i = 0; i < size; i++)
        printf("a[%d] = %d\n", i, a[i]);
    l = 0;
    u = size - 1;
    rem = binary(a);
    if (rem < 0)
        printf("%d Is Absent At Any Position.....", val);
    else
        printf("%d Is Present At %d Position.....", val, rem);
}