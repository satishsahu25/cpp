#include<bits/stdc++.h>
using namespace std;

// ***work***

bool checkpalin(string s){
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}


int main(){

    string str;
    cin>>str;
    set<string>s;
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<=str.length();j++){
            if(checkpalin(str.substr(i,j-i)))
             {
                cout<<str.substr(i,j-i)<<endl;
                s.insert(str.substr(i,j-i));
             }
        }
    }

////here in set strings get stored in dictionary order
    for(auto ele:s){
        cout<<"@@@@@@"<<ele<<endl;
    }



    return  0;
}