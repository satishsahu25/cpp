#include <bits/stdc++.h>

using namespace std;

// Node data type
struct Node
{
    int data;
    Node *next;
};
Node *first = NULL;

// creating linkedlist
void createlist(int val)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = val;
    newnode->next = NULL;

    if (first == NULL)
    {
        first = newnode;
        return;
    }

    Node *temp = first;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
};

void display(){
    Node *reader=first;
    while(reader!=NULL){
        cout<<reader->data<<"->";
        reader=reader->next;
    }
    cout<<"NULL";
}
int main()
{
    createlist(5);
    createlist(6);
    createlist(7);
    createlist(8);
    display();

    return 0;
}