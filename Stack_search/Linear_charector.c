#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 10
char val;
int i;
int linear(char a[])
{
    printf("Enter Charector ie.A,<,@... : ");
    scanf("%c", &val);
    for (i = 0; i < size; i++)
    {
        if (val == a[i])
            return i + 1;
    }
    return -1;
}
int main()
{
    char a[size];
    int rem;
    for (i = 0; i < size; i++)
    {
        a[i] = rand() % 100;
        printf("a[%d] = %c \n", i, a[i]);
    }
    rem = linear(a);
    if (rem < 0)
        printf("%c Is Absent At Any Position.....", val);
    else
        printf("%c Is Present At %d Position.....", val, rem);
}