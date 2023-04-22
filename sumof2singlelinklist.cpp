#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* first=NULL;

void createlist(int val){
 Node* newnode=(struct Node*)malloc(sizeof(Node));
 newnode->data=val;
 newnode->next=NULL;

 //CHECK FOR EMPTY LIST
 if(first==NULL){
    first=newnode;
    return;
 }

 Node *temp=first;
 while(temp->next!=NULL){
        temp=temp->next;
 }
 temp->next=newnode;
}

void display(){
    Node *reader=first;
    while(reader!=NULL){
        cout<<reader->data<<"->";
        reader=reader->next;
    }
    cout<<"NULL";
}
Node *sum(Node * l1,Node *l2){

}

int main() {
    createlist(1);
    createlist(2);
    createlist(3);
    createlist(4);
    createlist(5);
    display();


    return 0;
}


///SUM OF TWO LINKED LIST

// ************LEETCODE****************

//  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* ans=new ListNode(0); ////yaha answer ek single starting node hai
//         ListNode* p=l1;
//         ListNode *q=l2;
//         ListNode*curr=ans;  //copy kar diya phir curr ko badhaate gaye
//           int carry=0;
//         while(p!=NULL || q!=NULL){
//               int sum=0;
//             int x=p!=NULL ? p->val:0;
//             int y=q!=NULL ? q->val:0;
//             sum=carry+x+y;
//             carry=sum/10;
//             curr->next=new ListNode(sum%10);  //carry ko store karvana
//             curr=curr->next;
//             if(p!=NULL) p=p->next;  //agale node par jana
//             if(q!=NULL) q=q->next;

//         }
//         if(carry>0){
//             curr->next=new ListNode(carry);
//         }
//        return ans->next;   //yaha next se curr wali list return mein jaa rahi hai

//     }