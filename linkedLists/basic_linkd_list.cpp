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

int sum(struct node *p)
{
    //iterative sum of elements logic
    /*int sum = 0; 
    while(p!=NULL)
    {
        sum = sum + p->data;
        p=p->next;
    }
    return sum;*/

    // recursive sum of elements logic
    if (p==NULL)
    {
        return 0;
    }
    else
    {
        return sum(p->next) + p->data;
    }
    
}

int max_element(struct node *p)
{
    int x=INT_MIN;
    /*while(p!=NULL)
    {
        //1st type
        // x = max(x,p->data)*/;


        //2nd type
        /*if(p->data>x)
        {
            x=p->data;
        }
        p=p->next;
    }
    return x*/;

   
   //recursive approach
   if(p==NULL)
        return x;
    x = max_element(p->next);
    return x > p->data ? x : p->data;           //using ternary operator instead of if else to make it simpler.
}

int min_element(node *p)
{
    int x=INT_MAX;
    if(p==NULL)
        return x;
    x = min_element(p->next);
    return x < p->data ? x : p->data;
}

node* search(node *p, int key)
{
    /*
    while(p!=NULL)
    {
        if(key==p->data)
        {
            cout<<"found element: "<<p->data<<endl;
            return p;
        }
        p=p->next;
    }
    cout<<"not found"<<endl;
    return NULL;
    */

   //recursive approach
    if(p==NULL)
    {
        cout<<"not found"<<endl;
        return NULL;
    }
    if(key == p->data)
    {
        cout<<"found element: "<<p->data<<endl;
        return p;
    }
    else
        return search(p->next,key);
}

//improvised linear search by performing move to front operation
node * lSearch(node *p, int key)
{
    struct node *q; //tail pointer
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=head;
            head = p;
            cout<<"found element: "<<p->data<<endl;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

void insert_front(int val)
{
    node *temp;
    temp = new node;
    temp->data = val;
    temp->next = head;
    head = temp;
}

void insert_last(int val,node *p)
{
    node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    while(p!=NULL)
    {
        if(p->next==NULL)
        {
            temp->data = val;
            temp->next = NULL;
            p->next = temp;
            p = temp;
        }
        p=p->next;
    }
}

void insert_at_last(int val)
{
    node *last;
    node *temp = new node;
    temp->data = val;
    temp->next = NULL;
    last = head;
    if(head==NULL)
    {
        head = last = temp;
    }
    else
    {
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = temp;
    }
}

void insert_at_position(int val, int pos)
{
    node *p;
    node *temp = new node;
    temp->data = val;
    p=head;
    for(int i=0;i<pos-1;i++)
    {
        p=p->next;
    }
    temp->next = p->next;
    p->next = temp;
    
}

void generic_insert(int val, int index, node *p)
{
    node *temp;
    // p = head;
    //check boundary conditions of linked list empty & length
    if(index<0 || index>count(p))
        return;

    //create new node to insert
    temp = new node;
    temp->data = val;

    //insert operation

    if(index == 0)
    {
        temp->next = head;
        head = temp;
    }

    else if(index>0)
    {
        for(int i=0;i<index-1 && p;i++)
            p=p->next;
        temp->next = p->next;
        p->next = temp;
    }
}

void sortedInsert(node *p, int val)
{
    node *t,*q=NULL;
    t->data = val;
    t->next = NULL;

    if(head==NULL)
    {
        head = t;
    }
    else
    {
        while(p && p->data < val)
        {
            q=p;
            p=p->next;
        }
        if(p==head)
        {
            t->next = head;
            head = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

void reverse1(node *p)          // reversing/swapping data in nodes instead of changing links using an array
{
    vector<int> a;
    int i = 0;
    while(p!=NULL)
    {
        a.push_back(p->data);
        p=p->next;
        i++;
    }
    p=head;
    i--;
    while(p!=NULL)
    {
        p->data = a[i];
        p=p->next;
        i--;
    }
}

void reverse2(node *p)
{
    node *previous = NULL;  //q
    node *temp = NULL;   //r
    while(p!=NULL)
    {
        temp = previous;
        previous = p;
        p = p->next;
        previous->next = temp;
    }
    head = previous;
}

void recurReverse1(node *p, node *q)    //passing two pointers as params
{
    if(p!=NULL)
    {
        recurReverse1(p->next,p);
        p->next = q;
    }
    else
    {
        head = q;
    }
}

void recurReverse2(node *p)    //passing only one pointer as param  
{
    if(p == NULL || p->next == NULL)
    {
        head = p;               //update head when the last node is reached
        return;
    }
    recurReverse2(p->next);     //recursive call
    p->next->next = p;          //reverse the link
    p->next = NULL;             //set current node's next to null
}

int delete_node(node *p, int index)
{
    node *q = NULL;
    int x = -1;

    if (index < 1 || index > count(p))
        return -1;

    if(index == 1)
    {
        q=head;
        x=head->data;
        head = head->next;
        free(q);        // use free() or delete in cpp & free in c
        return x;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next = p->next;
        x=p->data;
        free(p);        // use free() or delete in cpp & free in c
        return x;
    }
}

bool is_sorted_list(node *p)
{
    int x = INT_MIN;
    while(p != NULL)
    {   
        if(p->data < x)
            return false;
        
        x = p->data;
        p = p->next;
    }
    return true;

}

void remove_duplicates(node *p)
{
    node *q = p->next;

    while(q!=NULL)
    {
        if(p->data != q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next = q->next;
            free(q);
            q=p->next;
        }
    }
}

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
    // int arr[]={1,3,5,7,9,11,13,15,17,19};
    int arr[] = {20,10,50,40,30};
    create_lList(arr);
    display_list();
    
    // cout<<"count: "<<count(head)<<endl;
    
    // cout<<"sum: "<<sum(head)<<endl;
    
    // cout<<"max element: "<<max_element(head)<<endl;
    // cout<<"min element: "<<min_element(head)<<endl;
    
    //cout<<"searched element: "<<lSearch(head,13)<<endl;
    //cout<<"searched element: "<<lSearch(head,19)<<endl;
    
    // insert_at_last(30);
    // insert_at_last(40);
    // insert_at_last(50);
    
    //sortedInsert(head,55);
    //sortedInsert(head,54);
    //sortedInsert(head,56);
    //sortedInsert(head,5\7);
    
    //display_list();
    
    // recurReverse2(head);

    // generic_insert(10,0,head);
    // generic_insert(20,5,head);
    // generic_insert(30,12,head);
    // generic_insert(5,0,head);
    // generic_insert(25,3,head);

    // delete_node(head,6);
    //printf("Deleted element %d\n",delete_node(head,0));

    // printf("sorted list?\n%s",is_sorted_list(head)?"yes":"no");

    // remove_duplicates(head);

    // sort_list(head);
// 
    display_list();
    return 0;
}