#include <bits/stdc++.h>
using namespace std;

bool pairs(int top1, int top2)
{
    if (abs(top1 - top2) == 1)
    {
            return true;
    }else{
        return false;
    }
}

bool pairWiseConsecutive(stack<int> s)
{
    // Code here
    int len=s.size();
    if(len%2!=0) s.pop();
    bool ans=true;
    while(!s.empty() && ans==true){
         int top1 = s.top();
         s.pop();
         if(s.empty()) return ans=true;
         int top2 = s.top();

        if(pairs(top1, top2)){
            continue;
        }else{
            ans=false;
        }
    }
    return ans;
}

int main()
{

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<pairWiseConsecutive(s);

    return 0;
}