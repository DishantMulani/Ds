#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 10
int a[size], va, top = 0, i, n;
void ins()
{
    if (top < size)
    {
        printf("\nEnter value a[%d] = ", top);
        scanf("%d", &va);
        a[top++] = va;
    }
    else
        printf("\nSorry Size Of Array Is Full So You Can Not Enter Any Value !!!!!");
}
void dis()
{
    printf("a[%d] = ", top - 1);
    for (i = 0; i < top; i++)
    {
        printf("%d  ", a[i]);
    }
}
void shift()
{
    int po = 0;
    n = top;
    if (top < size)
    {
        while (top > po)
        {
            a[top] = a[top - 1];
            top--;
        }
        printf("Enter Value At 0 Position : ");
        scanf("%d", &va);
        a[po] = va;
    }
    else
        printf("\nSorry Size Of Array Is Full So You Can Not Enter Any Value !!!!!\n");
    top = n;
}
void disp()
{
    if (top < size)
    {
        printf("a[%d] = ", top);
        for (i = 0; i <= top; i++)
        {
            printf("%d  ", a[i]);
        }
        top++;
    }
    else
    {
        printf("a[%d] = ", top - 1);
        for (i = 0; i < top; i++)
        {
            printf("%d  ", a[i]);
        }
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n~~~~~~~~~~~~~~~~~\n");
        printf("1.INSERT VALUE\n");
        printf("2.DISPLAY ARRRY\n");
        printf("3.SHIFT VALUE\n");
        printf("4.DESPLAY ARRAY AFTER CHANGE POSITION\n");
        printf("0.EXIT\n");
        printf("~~~~~~~~~~~~~~~~~\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        printf("~~~~~~~~~~~~~~~~~\n");
        switch (ch)
        {
        case 1:
            ins();
            break;
        case 2:
            dis();
            break;
        case 3:
            shift();
            break;
        case 4:
            disp();
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