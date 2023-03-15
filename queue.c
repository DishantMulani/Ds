#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 10
int a[size], front = -1, rear = -1, i, val;
void ins()
{

    if (front == -1)
    {
        front = 0;
        printf("\nIf You Insert Value Than Press ---> 1\n");
    }
    else if (rear == size - 1)
        printf("\nQueue IS Full.....\n");
    else
    {
        printf("\nEnter a[%d] = ", ++rear);
        scanf("%d", &val);
        a[rear] = val;
    }
}
void del()
{
    if (front == rear)
    {
        front = -1;
        rear = -1;
        printf("\nQueue Is Empty SO Enter Atleast 1 Value.....\n");
    }
    else
        front++;
}
void dis()
{
    if (front == -1)
    {
        printf("\nQueue Is Empty SO Enter Atleast 1 Value.....\n");
    }
    else
    {
        printf("a[%d] = ", rear - front);
        for (i = front; i <= rear; i++)
        {
            printf("%d  ", a[i]);
        }
    }
}
void main()
{
    int ch;
    while (1)
    {
        printf("\n~~~~~~~~~~~~~~~~~\n");
        printf("1.INSERT VALUE\n");
        printf("2.DELETE VALUE\n");
        printf("3.DISPLAY\n");
        printf("0.EXIT");
        printf("\n~~~~~~~~~~~~~~~~~\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        printf("~~~~~~~~~~~~~~~~~\n");
        switch (ch)
        {
        case 1:
            ins();
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
            printf("\nEnter Right Choice........\n");
            break;
        }
    }
}