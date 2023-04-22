#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};


//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> pre;
  vector<int> in;
  vector<int> post;

  stack<pair<Node*,int>> s;
    s.push({root,1});
    while(!s.empty()){
        int state=s.top().second;
        Node * node=s.top().first;
        if(state==1){
            pre.push_back(node->data);
            state++;
            if(node->left){
                s.push({node->left,1});
            }
        }else if(state==2){
            in.push_back(node->data);
            state++;
            if(node->right){
                s.push({node->right,1});
            }
        }else{
            post.push_back(node->data);
            state++;
            s.pop();
        }
    }
    for(auto ele:pre){
        cout<<ele<<" ";
    }
    return pre;
}

int main(){

struct Node *root =(Node*)malloc(sizeof(Node*));
root->data=1;
root->left=(Node*)malloc(sizeof(Node*));
root->left->data=2;
root->right=(Node*)malloc(sizeof(Node*));
root->right->data=3;
root->left->left=(Node*)malloc(sizeof(Node*));
root->left->left->data=4;
root->left->right=(Node*)malloc(sizeof(Node*));
root->left->right->data=5;
root->right->right=(Node*)malloc(sizeof(Node*));
root->right->right->data=6;
vector<int> v=preorder(root);
for(auto ele:v){
    cout<<ele<<" ";
}
    return 0;
}