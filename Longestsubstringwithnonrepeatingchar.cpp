#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int l=0,r=0;
    set<char> Set;
    int maxi=0;
    while(r<s.size()){
   auto ptr=Set.find(s[r]);
   if(ptr==Set.end()){
    maxi=max(maxi,r-l+1);
    Set.insert(s[r]);
    r++;
   }else{
    Set.erase(s[l]);
    l++;
   }
    }
    cout<<maxi;

    return 0;
}