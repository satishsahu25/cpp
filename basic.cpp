#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    cout<<a<<" and "<<b;
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};

     for(int i=a;i<=b;i++){
        if(i>=1 && i<=9){
            cout<<arr[i-1];
        }
        if(i%2==0 && i>9){
            cout<<"even";
        }
        if(i>9 && (i%2!=0)){
            cout<<"odd";
        }
        cout <<i;
     }
    return 0;
}