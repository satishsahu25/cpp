#include<bits/stdc++.h>
using namespace std;

// The structure of the class is

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void sortedinsert(stack<int> &s, int x){
    if(s.empty() || x>s.top()){
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    sortedinsert(s,x);
    s.push(temp);
    }
void SortedStack :: sort()
{
   //Your code here
     int x;
   if(!s.empty()){
    x=s.top();
    s.pop();
    sort();
    sortedinsert(s,x);
   }

}




int main(){

    return 0;
}