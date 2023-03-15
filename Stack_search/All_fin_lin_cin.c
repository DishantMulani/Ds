#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 100
int arr[size], front = -1, rear = -1, i, val, n, po, back;
void firstInsert()
{
    n = rear;
    if (front == -1)
    {
        printf("Press 2 For Insert 1st Value");
    }
    else
    {
        rear++;
        while (n >= 0)
        {
            arr[n + 1] = arr[n];
            n--;
        }
        printf("Please Enter The Value : ");
        scanf("%d", &val);
        arr[front] = val;
    }
}
void lastInsert()
{
    if (rear == -1)
    {
        front = 0;
        rear = 0;
        printf("\nPress 2 For Insert value\n");
    }
    else if (rear == size)
    {
        printf("\nArray Full...............\n");
    }
    else
    {
        printf("Please Enter The Value : ");
        scanf("%d", &val);
        arr[rear] = val;
        rear++;
    }
}
void centerInsert()
{
    n = rear;
    if (rear == -1)
    {
        printf("Press 2 For Insert 1st Value");
    }
    else
    {
    back:
        printf("Enter Position To Add Value : ");
        scanf("%d", &po);
        if (po > rear)
        {
            printf("\nPlease Enter Right Position");
            goto back;
        }
        else
        {
            printf("Enter Value : ");
            scanf("%d", &val);
            while (n >= po)
            {
                arr[n + 1] = arr[n];
                n--;
            }
            arr[po] = val;
            rear++;
        }
    }
}
void firstDelete()
{
    int n = front;
    if (rear == 0)
    {
        printf("Full Array Deleted.....");
    }
    else
    {
        while (n < rear)
        {
            arr[n] = arr[n + 1];
            n++;
        }
        rear--;
    }
}
void lastDelete()
{
    if (rear == 0)
    {
        printf("Full Array Deleted.....");
    }
    else
    {
        rear--;
        printf("Last Value Successfully Deleted....");
    }
}
void centerDelete()
{
    if (rear == 0 || rear == -1)
    {
        printf("\nArray Empty.... Please Press 2 For Insert Value....\n");
    }
    else
    {
    back:
        printf("Enter Position To Delete  : ");
        scanf("%d", &po);
        if (po > rear)
        {
            printf("\nPlease Enter Right Position");
            goto back;
        }
        else
        {
            n = po;
            while (n <= rear)
            {
                arr[n] = arr[n + 1];
                n++;
            }
            rear--;
        }
    }
}
void displayArray()
{
    printf("\n===============\n");
    if (rear == 0)
    {
        printf("Full Array Deleted.....");
    }
    else
    {
        for (i = front; i < rear; i++)
        {
            printf("%d  ", arr[i]);
        }
    }
    printf("\n===============");
}
void main()
{
    int ch;
    while (1)
    {
        printf("\n1.FIRST INSERT\n");
        printf("2.LAST INSERT\n");
        printf("3.CENTER INSERT\n");
        printf("4.FIRST DELETE\n");
        printf("5.LAST DELETE\n");
        printf("6.CENTER DELETE\n");
        printf("7.DISPLAY ARRAY\n");
        printf("0.EXIT\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            firstInsert();
            break;
        case 2:
            lastInsert();
            break;
        case 3:
            centerInsert();
            break;
        case 4:
            firstDelete();
            break;
        case 5:
            lastDelete();
            break;
        case 6:
            centerDelete();
            break;
        case 7:
            displayArray();
            break;
        case 0:
            exit(0);
        }
    }
}