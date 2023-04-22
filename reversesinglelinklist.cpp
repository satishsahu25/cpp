#include <bits/stdc++.h>
using namespace std;
////REVERSE A LINKED LIST
//in   10 20 30 40 50 x
//out   50 40 30 20 10 x

//Approach-1 reverse all the pointers

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

void reversedlist(){
    Node * pre=NULL;
    Node * cur=first;
    Node * next=NULL;
    while(cur!=NULL){
         next=cur->next;
        cur->next=pre;
    pre=cur;
    cur=next;
    };

   first=pre;

}

void revdisplay(){
    Node *reader=first;
    while(reader!=NULL){
        cout<<reader->data<<"<-";
        reader=reader->next;
    }
}


int main() {

   createlist(5);
    createlist(6);
    createlist(7);
    createlist(8);
    display();
    cout<<endl<<"NULL<-";
    reversedlist();
    revdisplay();
    return 0;
}


