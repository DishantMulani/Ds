#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *first_insert(int data, struct node *start)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}
void display(struct node *start)
{
    struct node *p;
    if (start == NULL)
        printf("\nList Is Empty.....\n");
    else
    {
        p = start;
        printf("\nList : ");
        while (p != NULL)
        {
            printf("%d\t", p->info);
            p = p->link;
        }
    }
}
void main()
{
    int ch, data;
    struct node *start = NULL;
    while (1)
    {
        printf("\n1.Enter Value At First Position");
        printf("\n2.Display");
        printf("\n0.Exit");
        printf("\nEnter Yore Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value : ");
            scanf("%d", &data);
            start = first_insert(data, start);
            break;
        case 2:
            display(start);
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("\nEnter Right Choice.....\n");
        }
    }
}