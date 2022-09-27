#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
int head_count(struct node **head)
{
    int count = 0;
    struct node *ptr = *head;
    if (*head == NULL)
        printf("\nList Is Empty.....\n");
    else
    {
        printf("\n~~~~~> ");
        while (ptr != NULL)
        {
            printf("%d    ", ptr->data);
            count++;
            ptr = ptr->next;
        }
        printf("\nTotal List = %d \n", count);
    }
}
int dinsert_first(struct node **head, int data)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    ptr = *head;
    temp->data = data;
    temp->pre = NULL;
    temp->next = ptr;
    ptr->pre = temp;
    *head = temp;
}
int dinsert_last(struct node **head, int data)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    ptr = *head;
    temp->data = data;
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->pre = ptr;
        ptr = temp;
    }
}
int dinsert_cen(struct node **head, int data, int pos)
{
    struct node *temp, *ptr, *nnode;
    int i = 1;
    temp = (struct node *)malloc(sizeof(struct node));
    ptr = *head;
    temp->data = data;
    if (pos == 1)
    {
        temp->next = ptr;
        *head = temp;
    }
    else
    {
        while (i < pos)
        {
            nnode = ptr;
            ptr = ptr->next;
            i++;
        }
        temp->pre = nnode;
        nnode->next = temp;
        temp->next = ptr;
        ptr->pre = temp;
    }
}
int main()
{
    struct node *head = NULL;
    int ch, data, pos;
    while (1)
    {
        printf("\n1.Insert Data At First Position");
        printf("\n2.Insert Data At Last Position");
        printf("\n3.Insert Data At Any Position");
        printf("\n4.Display");
        printf("\n0.Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value : ");
            scanf("%d", &data);
            dinsert_first(&head, data);
            break;
        case 2:
            printf("Enter Value : ");
            scanf("%d", &data);
            dinsert_last(&head, data);
            break;
        case 3:
            printf("Enter Posirtion : ");
            scanf("%d", &pos);
            printf("Enter Value : ");
            scanf("%d", &data);
            dinsert_cen(&head, data, pos);
            break;
        case 4:
            head_count(&head);
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter Right Choice.....");
        }
    }
}