#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 9
int top = -1, a[size], val, rm, i, x;
void lastinsert()
{
    if (top < size)
    {
        printf("\nEnter Value a[%d] : ", top + 1);
        scanf("%d", &val);
        a[++top] = val;
    }
    else
        printf("Array is Full\n");
}
void del()
{
    if (top == -1)
    {
        printf("Please insert atleast 1 number!!!!!");
    }
    else
    {
        x = a[top--];
    }
}
void dis()
{
    int i;
    printf("\n");
    if (top == -1)
    {
        printf("Please insert atleast 1 number!!!!");
    }
    else
    {
        printf("a[%d] = ", top);
        for (i = 0; i <= top; i++)
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
        printf("\n\n1.INSERT VALUE\n");
        printf("2.DELETE VALUE\n");
        printf("3.DISPLAY\n");
        printf("0.EXIT\n");
        printf("~~~~~~~\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        printf("~~~~~~~\n");
        switch (ch)
        {
        case 1:
            lastinsert();
            break;
        case 2:
            del();
            break;
        case 3:
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