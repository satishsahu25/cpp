#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    if(a>=b&&a>=c){
        if(a*a==b*b+c*c){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }

    else if(b>=a&&b>=c){
        if(b*b==a*a+c*c){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }
    else if(c*c==b*b+a*a){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    return 0;
}