#include <bits/stdc++.h>
using namespace std;


int main() {
    queue<int> q;
    for(int i=1;i<=9 &&i<=X;i++){
        q.push(i);
    }

vector<int> ans;
ans.push_back(0);
while(!q.empty()){
    int num=q.front();
    q.pop();
    if(num<=X){
        ans.push_back(num);
        int lastdigit=num%10;

        //if last digit is zero
       if(lastdigit==0){
         q.push((num*10)+lastdigit+1);
       }
       else if(lastdigit==9){
         q.push((num*10)+lastdigit-1);
       }
      else{
         q.push((num*10)+lastdigit-1);
         q.push((num*10)+lastdigit+1);
       }
    }
}

    return 0;
}