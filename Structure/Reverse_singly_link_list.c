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
int reverse(struct node **head)
{
    struct node *pnode, *cnode, *nnode;
    pnode = NULL;
    cnode = *head;
    nnode = *head;
    while (nnode != NULL)
    {
        nnode = nnode->next;
        cnode->next = pnode;
        pnode = cnode;
        cnode = nnode;
    }
    *head = pnode;
}
int main()
{
    struct node *head = NULL;
    int ch, data;
    while (1)
    {
        printf("\n1.Insert Data");
        printf("\n1.reverse Data");
        printf("\n3.Display");
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
            reverse(&head);
            break;
        case 3:
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