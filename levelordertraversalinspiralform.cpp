#include <bits/stdc++.h>
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

vector<int> findSpiral(Node *root)
{
    //Your code here
     vector<int>ans;
    if(!root) return ans;
    queue<Node*> q;
    q.push(root);
    int f=0;
    while (!q.empty())
    {
        int sz=q.size();
        vector<int> tmp;
       while(sz--){
            Node *t=q.front();
            tmp.push_back(t->data);
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        if(f%2==0) reverse(tmp.begin(),tmp.end());
        for(auto ele:tmp){
            ans.push_back(ele);
        }
        f=(f==0) ? 1 : 0;

    }
    return ans;

}

int main()
{

    return 0;
}