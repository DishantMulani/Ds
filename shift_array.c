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
    printf("\n");
    if (top == -1)
    {
        printf("Please insert atleast 1 number");
    }
    else
    {
        for (i = 0; i <= top; i++)
        {
            printf("%d  ", a[i]);
        }
    }
}
void shift()
{

    top = top + 1;
    printf("Enter Position : ");
    scanf("%d", &po);
    while (top > po)
    {
        a[top] = a[top - 1];
        top--;
    }
    printf("Enter Change Position Value : ");
    scanf("%d", &va);
    a[po] = va;
}
void dis()
{

    for (i = 0; i <= n + 1; i++)
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
        printf("2.SHIFT VALUE\n");
        printf("3.DISPLAY ARRRY\n");
        printf("4.DESPLAY ARRAY AFTER CHANGE POSITION\n");
        printf("0.EXIT\n");
        printf("~~~~~~~~~~~~~~~~~~\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        printf("~~~~~~~~~~~~~~~~~~\n");
        switch (ch)
        {
        case 1:
            ins();
            break;
        case 2:
            shift();
            break;
        case 3:
            disp();
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