#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    double A, B, C;
    char arr[5];
    for( int i=0;i<T;i++){
        cin>>A>>B>>C;
         int a=int(A);
         int j=0;
         
         while(a!=0){
            int d=a%16;
            if(d>10){
                arr[j]=d+55;
                j++;
            }else{
                arr[j]=d+48;
                j++;
            }
            a=a/16;
         }
        cout<<"0x";
         for(int k=j-1;k>=0;k--){
            cout<<arr[k];
         }
         cout<<endl;
       //  for B
            int b=int(B);
            int d=0;
            while(b!=0){
                b=b/10;
                d++;
            }
            for(int i=0;i<15-(d+4);i++){
                cout<<"_";
            }
         if(B>0){
            cout<<"+"<<fixed<<setprecision(2)<<B<<endl;
         }else{
            cout<<"-"<<fixed<<setprecision(2)<<-B<<endl;;
         }
         if(C<10){
            cout<<setprecision(9)<<C;

         }else{
            int p=0;
            while(!(C<10)){
                C=C/10;
                p++;
            }
            if(p<10){
                cout<<setprecision(9)<<C<<"E+0"<<p;
            }else{
                cout<<setprecision(9)<<C<<"E+"<<p;
            }
         }

        // cout<<scientific<<uppercase<<setprecision(9)<<C;
    }
//     cout << setw(0) << "0x" << hex << nouppercase << left << (long long)A << endl;
// cout << fixed << setw(15) << setprecision(2) << setfill('_') << right << showpos << B << endl;
// cout << scientific << setw(15) << setprecision(9) << noshowbase << right << C << endl;

    return 0;
}
