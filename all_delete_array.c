#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 9
int top = -1, a[size], val, rm, i;
;
void lastinsert()
{
    if (top < size)
    {
        printf("\nEnter Value a[%d] = ", top + 1);
        scanf("%d", &val);
        a[++top] = val;
    }
    else
        printf("Array is Full\n");
}
void dis()
{
    int i;
    printf("\n");
    if (top == -1)
    {
        printf("Please insert atleast 1 number");
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
void rdis()
{
    printf("Enter To Remove Size Of Array :");
    scanf("%d", &rm);
    if (rm <= top)
    {
        printf("\na[%d] = ", top - rm);
        for (i = 0; i <= top - rm; i++)
        {
            printf("%d  ", a[i]);
        }
        top = i - 1;
    }
    else if (top == 0 || top == -1 || rm == top + 1)
    {
        printf("\nFull Array Deleted...\nPlease Insert Atleast 1 Number\n");
        top = -1;
    }
    else
    {
        printf("\nNot Match with Array Length....\nPlease Enter Right Size Of Array\n");
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n\n1.INSERT VALUE\n");
        printf("2.DISPLAY\n");
        printf("3.DELETE VALUE At ANY POSITION\n");
        printf("0.EXIT\n");
        printf("~~~~~~~~~~~~~~~~\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        printf("~~~~~~~~~~~~~~~~\n");
        switch (ch)
        {
        case 1:
            lastinsert();
            break;
        case 2:
            dis();
            break;
        case 3:
            rdis();
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