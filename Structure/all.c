#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *emplist(struct node *start, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}
struct node *beg(struct node *start, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}
struct node *end(struct node *start, int data)
{
    struct node *p, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    p = start;
    while (p->link != NULL)
    {
        p = p->link;
    }
    p->link = temp;
    temp->link = NULL;
    return start;
}
struct node *nposition(struct node *start, int data, int position)
{
    int i;
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    if (position == 1)
    {
        temp->link = start;
        start = temp;
        return start;
    }
    p = start;
    for (i = 1; i < position - 1 && p != NULL; i++)
    {
        p = p->link;
    }
    if (p == NULL)
    {
        printf("\nSorry your %d position is grater than list position.....\n", position);
    }
    else
    {
        temp->link = p->link;
        p->link = temp;
    }
    return start;
}
void disp(struct node *start)
{
    struct node *p;
    if (start == NULL)
    {
        printf("\nList in empty.....\n");
    }
    else
    {
        p = start;
        printf("\nlist : ");
        while (p != NULL)
        {
            printf("%d\t", p->info);
            p = p->link;
        }
        printf("\n");
    }
}
int main()
{
    struct node *start = NULL;
    int ch, data, position;
    while (1)
    {
        printf("\n1.insert in an empty list\n");
        printf("2.insert at beginning\n");
        printf("3.insert at end\n");
        printf("4.insert at nth position\n");
        printf("5.Display\n");
        printf("0.exit\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (start != NULL)
            {
                printf("\nlist is not Empty.....\n");
                break;
            }
            printf("Enter element : ");
            scanf("%d", &data);
            start = emplist(start, data);
            break;
        case 2:
            printf("Enter element : ");
            scanf("%d", &data);
            start = beg(start, data);
            break;
        case 3:
            printf("Enter element : ");
            scanf("%d", &data);
            start = end(start, data);
            break;
        case 4:
            printf("Enter element : ");
            scanf("%d", &data);
            printf("Enter position : ");
            scanf("%d", &position);
            start = nposition(start, data, position);
            break;
        case 5:
            disp(start);
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter right choice....");
        }
    }
}