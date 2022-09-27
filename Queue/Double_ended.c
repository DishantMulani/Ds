#include <stdio.h>
#include <stdlib.h>
#define size 5
int a[size], front = -1, rear = -1, i, val;
void iqueue()
{
    if (front == 0)
        printf("\nQueue Is Full.....\n");
    else if (front == -1)
    {
        front = size;
        rear = size;
        printf("\nIf You Insert value Than Press ~~~~~> 1\n");
    }
    else
    {
        front -= 1;
        printf("Enter Value : ");
        scanf("%d", &val);
        a[front] = val;
    }
}
void dqueue()
{
    if (rear <= 0)
        printf("\nQueue Is Empty.....\n");
    else
        rear--;
}
void display()
{
    if (rear <= 0)
    {
        printf("\nQueue Is Empty.....\n");
        front = -1;
    }
    else
    {
        printf("\n~~~~~> ");
        for (i = front; i < rear; i++)
            printf("%d   ", a[i]);
    }
    printf("\n");
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1.INSERT\n");
        printf("2.DELETE\n");
        printf("3.DISPLAY\n");
        printf("0.EXIT\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            iqueue();
            break;
        case 2:
            dqueue();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("\nEnter Right Choice.....\n");
        }
    }
}