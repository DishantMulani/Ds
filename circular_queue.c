#include <stdio.h>
#include <stdlib.h>
#define size 6
int a[size], front = 0, rear = 0, val;
void iqueue()
{
    if ((rear + 1) % size == front)
    {
        printf("\nQueue Is Full.....\n~~~~~~~~~~~~~~~~~~~");
    }
    else
    {
        printf("Enter Value : ");
        scanf("%d", &val);
        rear = (rear + 1) % size;
        a[rear] = val;
    }
    printf("\nfront : %d\trear : %d",front,rear);
}
void dqueue()
{
    if ((front + 1) % size == (rear + 1) % size)
    {
        printf("\nQueue Is Empty.....\n~~~~~~~~~~~~~~~~~~~");
        rear++;
    }
    else
    {
        front = (front + 1) % size;
    }
      printf("\nfront : %d\trear : %d",front,rear);
}
void display()
{
    if ((front + 1) % size == (rear + 1) % size)
    {
        printf("\nQueue Is Empty.....\n~~~~~~~~~~~~~~~~~~~");
    }
    else
    {
        printf("\n~~~~~> ");
        int i = front + 1;
        do
        {
            printf("%d  ", a[i]);
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
    }
      printf("\nfront : %d\trear : %d",front,rear);
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n\n1.INSERT\n");
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