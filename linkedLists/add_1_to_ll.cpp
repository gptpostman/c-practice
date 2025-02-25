#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

// function to create node
node *newNode(int data)
{
    node *new_node = new node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

//function to print the list
void printList(node *node)
{
    if(node==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    while(node != NULL)
    {
        printf("%d", node->data);
        if (node->next != NULL) 
        { 
            printf("->"); // Print "->" only if there is a next node
        }
        node = node->next;
    }
    printf("\n");
}

//function to reverse the list
node *reverse(node *head)
{
    node *previous = NULL;
    node *current = head;
    node *next;

    while(current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}

//helper function to addOne() function
node *addOneUtil(node *head)
{
    node *result = head;
    node *temp; 
    node *prev = NULL;
    int carry = 1;
    int sum;


    while(head != NULL)
    {
        sum = carry + (head? head->data:0);

        carry = (sum >= 10)? 1:0;

        sum = sum % 10;

        head->data = sum;

        temp = head;

        head = head->next;
    }

    if(carry > 0)
    {
        temp->next = newNode(carry);
    }
    
    return result;
}

// function to add 1 to the list
node *addOne(node *head)
{
    head = reverse(head);

    head = addOneUtil(head);

    return reverse(head);
}


int main()
{
    node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    printf("original list: ");
    printList(head);

    head = addOne(head);

    printf("resultant list: ");
    printList(head);

    return 0;
}

