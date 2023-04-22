#include<bits/stdc++.h>
using namespace std;

int findMaxLen(string s) {
        // code here
        map<char,int> m={{'(',-1},{')',1}};
        int l=0,r=0,sum=0;
        int maxl,len=0;
     while(s[r]!='\0'){
        if(sum==0){
            maxl+=len;
        }
        if(m[s[r]]>0 && sum<0){
            l++;
            len=r-l;
        }else{
            sum+=m[s[r]];
            len++;
               r++;
        }
     }

     return maxl;
}

int main(){

    return 0;
}