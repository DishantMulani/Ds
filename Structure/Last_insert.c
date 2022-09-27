#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *empty_list(int data, struct node *start)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}
struct node *last_insert(int data, struct node *start)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    p = start;
    while (p->link != NULL)
        p = p->link;
    p->link = temp;
    temp->link = NULL;
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
        printf("\n1.Insert 1st List Element");
        printf("\n2.Enter Value At Last Position");
        printf("\n3.Display");
        printf("\n0.Exit");
        printf("\nEnter Yore Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (start != NULL)
                printf("\nList Is Not Empty.....\n");
            else
            {
                printf("Enter Element : ");
                scanf("%d", &data);
                start = empty_list(data, start);
            }
            break;
        case 2:
            if (start == NULL)
                printf("\nList Is Empty So Insert 1st List Element.....\n");
            else
            {
                printf("Enter Value : ");
                scanf("%d", &data);
                start = last_insert(data, start);
            }
            break;
        case 3:
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