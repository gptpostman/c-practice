#include<bits/stdc++.h>
#include<vector>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

// Note: structure having a pointer of its own type is known as self referential structure

template <size_t n>
void create_lList(int (&arr)[n])
{
    // int n = arr.size();
    struct node *new_node, *temp;
    
    //initialize head node
    head = (struct node *)malloc(sizeof(struct node));


    head->data=arr[0];                  //assign data to head's data
    head->next=NULL;                    //assign null to head's next

    temp = head;                        //make temp point on head
    
    for(int i=1;i<n;i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        
        //create a new node
        new_node->data = arr[i];        //assign data to new node's data
        new_node->next = NULL;          //assign null to new node's next

        temp->next=new_node;            //assign temp's next the address of new node
        temp=new_node;                  //make temp point on new node
    }
}

//helper function to recursively call display_list method
void display_recursive(struct node *p)
{
    if(p != NULL)
    {
        printf("%d",p->data);
        if (p->next != NULL) 
        { 
            printf("->"); // Print "->" only if there is a next node
        }
        display_recursive(p->next);
    }
}

void display_list()
{
    struct node *p = head;
    // if(p==NULL)
    // {
    //     cout<<"list is empty"<<endl;
    //     return;
    // }
    // display_recursive(head);
    if(p != NULL)
    {
        // printf("data = %d\n",p->data);
        display_recursive(head);
    }
    cout<<endl;
}

int count(struct node *p)
{
    int count = 0;

    //iterative count logic
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;

    //recursive count logic
    // if(p!=NULL)
    // {
    //     return count(p->next)+1;
    // }
}

//method 1 -: Using bubble sort technique, uses two pointers

void sort_list(node *&p) 
{
    if (!p || !p->next) return;  // Edge case: empty or single-node list

    int n = count(p);  // Use the passed pointer

    for (int i = n - 2; i >= 0; i--)         // Outer loop for passes 
    {  
        node *q = p;
        node *x = p->next;

        for (int j = 0; j <= i; j++)         // Inner loop for swaps 
        {  
            if (q->data > x->data) 
            {
                int temp = q->data;         // Swap values
                q->data = x->data;
                x->data = temp;
            }
            q = x;                          // Move forward
            x = x->next;
        }
    }
}

int main()
{
    int arr[] = {20,10,50,40,30};
    create_lList(arr);
    display_list();

    sort_list(head);

    display_list();
    return 0;
}