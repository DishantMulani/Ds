#include <stdio.h>
#include <stdlib.h>
#define size 5
int a[size], front = -1, rear = -1, i, val, n;
void iqueue()
{
    if (front == size)
        printf("\nQueue Is Full.....\n~~~~~~~~~~~~~~~~~~~\n");
    else if (front == -1)
    {
        front = 0;
        printf("\nIf You Insert value Than Press ~~~~~> 1\n");
    }
    else
    {
        n = front;
        front++;
        while (n > 0)
        {
            a[n] = a[n - 1];
            n--;
        }
        printf("\nEnter Value : ");
        scanf("%d", &val);
        a[n] = val;
    }
    rear = front;
}
void dqueue()
{

    if (rear == 0 || rear < -1 || front == -1)
        printf("\nQueue Is Empty.....\n~~~~~~~~~~~~~~~~~~~\n");
    else
    {
        rear--;
        front--;
    }
}
void display()
{
    if (rear == 0 || rear < -1 || front == -1)
    {
        printf("\nQueue Is Empty.....\n~~~~~~~~~~~~~~~~~~~\n");
        front = -1;
    }
    else
    {
        printf("\n~~~~~> ");
        for (i = 0; i < rear; i++)
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