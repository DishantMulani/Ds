#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 4
int a[size], i, top = -1, va, po, n;
void ins()
{
    if (top < size)
    {
        printf("Enter Value : ");
        scanf("%d", &va);
        a[++top] = va;
    }
    else
    {
        printf("Size Of Array Is Full !!!!!");
    }
    n = top;
}
void disp()
{
    printf("a[%d] = ", top);
    for (i = 0; i <= top; i++)
    {
        printf("%d  ", a[i]);
    }
}
void shift()
{
    if (top < size)
    {
        printf("Enter Position : ");
        scanf("%d", &po);
        top++;
        for (i = top; i > po - 1; i--)
        {
            a[i] = a[i - 1];
        }
        printf("Enter Change Position Value : ");
        scanf("%d", &va);
        a[po] = va;
    }
}
void dis()
{
    printf("a[%d] = ", top - 1);
    for (i = 0; i <= top; i++)
    {
        printf("%d  ", a[i]);
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n\n1.INSERT VALUE\n");
        printf("3.DISPLAY ARRRY\n");
        printf("2.SHIFT VALUE\n");
        printf("4.DESPLAY ARRAY AFTER CHANGE POSITION\n");
        printf("0.EXIT\n");
        printf("~~~~~~~~~~~~~~~~~~~\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        printf("~~~~~~~~~~~~~~~~~~~\n");
        switch (ch)
        {
        case 1:
            ins();
            break;
        case 2:
            disp();
            break;
        case 3:
            shift();
            break;
        case 4:
            dis();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter Right Choice!!!!!!");
            break;
        }
    }
}