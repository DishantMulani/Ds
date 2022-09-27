#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
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
int insert_first(struct node **head, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = *head;
    temp->data = data;
    *head = temp;
}
int insert_end(struct node **head, int data)
{
    struct node *temp, *ptr;
    ptr = *head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    temp->data = data;
    if (*head == NULL)
    {
        *head = temp;
        return 0;
    }
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    return 0;
}
int insert_cen(struct node **head, int data, int pos)
{
    struct node *temp, *nnode, *ptr;
    int i = 1;
    temp = (struct node *)malloc(sizeof(struct node));
    ptr = *head;
    temp->data = data;
    while (i < pos)
    {
        nnode = ptr;
        ptr = ptr->next;
        i++;
    }
    temp->next = nnode->next;
    nnode->next = temp;
}
int delete_first(struct node **head)
{
    struct node *ptr, *temp;
    ptr = *head;
    if (*head == NULL)
    {
        printf("\nList Is Empty.....\n");
    }
    else
    {
        ptr = ptr->next;
        *head = ptr;
        free(temp);
    }
}
int delete_last(struct node **head)
{
    struct node *nnode, *temp, *ptr;
    ptr = *head;
    if (*head == NULL)
    {
        printf("\nList Is Empty.....\n");
    }
    else
    {
        while (ptr->next != NULL)
        {
            nnode = ptr;
            ptr = ptr->next;
        }
        if (ptr == *head)
        {
            *head = NULL;
        }
        else
            nnode->next = NULL;
        free(temp);
    }
}
int delete_cen(struct node **head, int pos)
{
    struct node *ptr, *temp, *nnode;
    ptr = *head;
    int c = 1;
    if (*head == NULL)
    {
        printf("\nList Is Empty.....\n");
    }
    else if (pos == 1)
    {
        ptr = ptr->next;
        *head = ptr;
    }
    else
    {
        while (c != pos)
        {
            c++;
            nnode = ptr;
            ptr = ptr->next;
        }
        nnode->next = ptr->next;
        free(temp);
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
        printf("\n4.Delete Data At First position");
        printf("\n5.Delete Data At last position");
        printf("\n6.Delete Data At Any position");
        printf("\n7.Display");
        printf("\n0.Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value : ");
            scanf("%d", &data);
            insert_first(&head, data);
            break;
        case 2:
            printf("Enter Value : ");
            scanf("%d", &data);
            insert_end(&head, data);
            break;
        case 3:
            printf("Enter Value : ");
            scanf("%d", &data);
            printf("Enter position : ");
            scanf("%d", &pos);
            insert_cen(&head, data, pos);
            break;
        case 4:
            delete_first(&head);
            break;
        case 5:
            delete_last(&head);
            break;
        case 6:
            printf("Enter position : ");
            scanf("%d", &pos);
            delete_cen(&head, pos);
            break;
        case 7:
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