#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 10
int a[size], va, top = 0, i, n, po = 0;
void ins()
{
    if (top < size)
    {
        printf("\nEnter value a[%d] = ", top);
        scanf("%d", &va);
        a[top++] = va;
    }
    else
        printf("\nSorry Size Of Array Is Full So You Can Not Enter Any Value !!!!!\n");
}
void dis()
{
    printf("a[%d] = ", top - 1);
    for (i = 0; i < top; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n\ntop===%d\n\n ", top);
}
void shift()
{
    if (top - 1 > po)
    {
        while (top - 1 > po)
        {
            a[po] = a[po + 1];
            po++;
        }
    }
    else
        printf("\nSorry Full Array Deleted Insert Atlest 1 Value !!!!!\n");
}
void disp()
{
    if (po > 0)
    {
        printf("a[%d] = ", po - 1);
        for (i = 0; i < po; i++)
        {
            printf("%d  ", a[i]);
        }
        top--;
        po = 0;
    }
    else
    {
        printf("Please insert atleast 1 number!!!!\n");
        top = 0;
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n~~~~~~~~~~~~~~~~~\n");
        printf("1.INSERT VALUE\n");
        printf("3.DISPLAY ARRRY\n");
        printf("2.DELETE VALUE\n");
        printf("4.DESPLAY ARRAY AFTER DELETE POSITION\n");
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