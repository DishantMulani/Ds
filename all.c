#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define size 8
int a[size], top = -1, i;
void insert(int n)
{
    if (top > size)
    {
        printf("Stack is full");
    }
    else
    {
        a[++top] = n;
    }
}

void lastout()
{
    printf("\n The element deleted is : %d", top--);
}

void firstin()
{

    int pos = 0, ele;

    printf("\n Enter element you want to add : ");
    scanf("%d", &ele);
    top++;
    for (i = top; i > pos - 1; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = ele;
}

void firstout()
{

    int pos = 1;

    for (i = pos - 1; i < top; i++)
    {
        a[i] = a[i + 1];
    }
    top--;
}

void del()
{
    int pos;
    printf("\n Enter Position You Want to delete element : ");
    scanf("%d", &pos);
    for (i = pos - 1; i < top; i++)
    {
        a[i] = a[i + 1];
    }
    top--;
}

void add()
{
    int pos, ele;
    printf("\n Enter Position You Want to add element : ");
    scanf("%d", &pos);
    printf("\n Enter element you want to add : ");
    scanf("%d", &ele);
    top++;
    for (i = top; i > pos - 1; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = ele;
}
void lastin()
{
    printf("\n enter any values : ", top++);
}

void show()
{
    for (i = 0; i <= top; i++)
    {
        printf("\n %d", a[i]);
    }
}

int main()
{
    int i, n;

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    insert(80);
    insert(90);

    // show();
    // printf("\n");
    // firstin();
    // firstout();
    // delete();
    // add();
    // show();

    while (1)
    {
        printf("\n 1. Last out");
        printf("\n 2. Last in");
        printf("\n 3. Firt in");
        printf("\n 4. First out");
        printf("\n 5. Add any element");
        printf("\n 6. Delete any element");
        printf("\n Enter your choice :");
        scanf("%d", &n);

        switch(n)
        {
        case 1:
            lastout();
            printf("\n");
            show();
            break;

        case 2:
            lastin();
            printf("\n");
            show();
            break;

        case 3:
            firstin();
            printf("\n");
            show();
            break;

        case 4:
            firstout();
            printf("\n");
            show();
            break;

        case 5:
            add();
            printf("\n");
            show();
            break;

        case 6:
            del();
            printf("\n");
            show();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter Right Choice....");
        }
    }
}