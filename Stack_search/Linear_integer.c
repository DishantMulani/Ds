#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 10
int i, val;
int linear(int a[])
{
    printf("Enter Integer Value : ");
    scanf("%d", &val);
    for (i = 0; i < size; i++)
    {
        if (val == a[i])
            return i + 1;
    }
    return -1;
}
int main()
{
    int a[size], rem;
    for (i = 0; i < size; i++)
    {
        a[i] = rand() % 100;
        printf("a[%d] = %d \n", i, a[i]);
    }
    rem = linear(a);
    if (rem < 0)
        printf("%d Is Absent At Any Position.....", val);
    else
        printf("%d Is Present At %d Position.....", val, rem);
}