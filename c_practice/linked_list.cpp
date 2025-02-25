#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
typedef node* nodeptr;

// Function prototypes
node *Create(int value);
node *InsertAtBeg(node *head, int value);
node *InsertAtPos(node *head, int value, int position);
node *InsertAtEnd(node *head, int value);
node *DeleteAtBeg(node *head);
node *DeleteAtPos(node *head, int position);
node *DeleteAtEnd(node *head);
node *Concatenate(node *head1, node *head2);
int Search(node *head, int element);
void Traverse(node *head);

int main()
{
    nodeptr head1 = new node;
    head1 -> data = 20;
    head1 -> next = NULL;
    cout<<head1->data<<endl;
    cout<<head1->next<<endl;

}
