#include<bits/stdc++.h>
using namespace std;

//  The structure of the class is
class StackQueue{
private:
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
};

//Function to push an element in queue by using 2 stacks.

// push()=O(N)
// pop()=O(1)

// ******************Approach-1 code***********************


// void StackQueue :: push(int x)
// {
//     // Your Code
//     while(!s1.empty()){
//         s2.push(s1.top());
//         s1.pop();
//     }
//     s1.push(x);
//     while(!s2.empty()){
//         s1.push(s2.top());
//         s2.pop();
//     }

// }

// //Function to pop an element from queue by using 2 stacks.
// int StackQueue :: pop()
// {
//         // Your Code
//         s1.pop();
// }



// ******************Approach-2 code***********************
// push()=O(1)
// pop()=O(N)


void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code
        int ans;
        if(!s2.empty()){
            ans=s2.top();
            s2.pop();
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            if(!s2.empty()){
                ans=s2.top();
            }else{
                //-1 will be there even after transfering the elements from s1 now also s2 is empty then -1 as we pop
                ans=-1;
            }
            return ans;
        }
}


int main(){

    int a,v;



    return 0;
}