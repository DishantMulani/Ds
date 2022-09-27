#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 5
int top = 0, a[size], po, v, i;
void ins()
{
    if (top < size)
    {
        printf("Enter Value a[%d] = ", top);
        scanf("%d", &v);
        a[top++] = v;
    }
    else
    {
        printf("Size Of Array Is Full !!!!!\n");
    }
}
void dis()
{
    printf("a[%d] = ", top - 1);
    for (i = 0; i < top; i++)
    {
        printf("%d  ", a[i]);
    }
}
void del()
{
    printf("\n Enter Position : ");
    scanf("%d", &po);
    for (i = po; i <= top; i++)
    {
        a[i] = a[i + 1];
    }
    top--;
}
void disp()
{
    if (top <= 0)
    {
        printf("\nFull Array Delete So insert atleast 1 number!!!!\n");
        top=0;
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
        printf("\n~~~~~~~~~~~~~~~~~~~~\n1.INSERT ARRAY\n2.VIEW INSERT ARRAY\n3.DELETE ARRAY\n4.VIEW DELETE ARRAY\n0.EXIT\n~~~~~~~~~~~~~~~~~~~~\n\n");
        printf("ENter Your Choice : ");
        scanf("%d", &ch);
        printf("\n~~~~~~~~~~~~~~~~~~~~\n");
        switch (ch)
        {
        case 1:
            ins();
            break;
        case 2:
            dis();
            break;
        case 3:
            del();
            break;
        case 4:
            disp();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter right Choice.....");
            break;
        }
    }
}