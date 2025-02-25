#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;


void createLinkedList(int n)
{
    // struct node *head;
    struct node *new_node,*tmp;
    int num;
    
    head = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("memory cannot be allocated\n");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        
        head->data=num;
        head->next=NULL;
        tmp = head;

        for (int i=2;i<=n;i++)
        {
            new_node = (struct node *)malloc(sizeof(struct node));

            if(new_node == NULL)
            {
                printf("memory cannot be allocated\n");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                
                new_node->data=num;
                new_node->next=NULL;

                tmp->next = new_node;
                tmp = tmp->next;
            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if(head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
            printf("Data = %d\n", tmp->data);
            tmp = tmp->next;
        }
    }
}

int main()
{
    int n;

    // Displaying the purpose of the program
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    // Inputting the number of nodes for the linked list
    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    // Creating the linked list with n nodes
    createLinkedList(n);

    // Displaying the data entered in the linked list
    printf("\n Data entered in the list : \n");
    displayList();

    return 0;
}