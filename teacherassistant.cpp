#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,marks,type;
    cin>>N;
    string name,er,pr;
    map<string,int> m;
    for(int i=0;i<N;i++){
        cin>>type;
        if(type==1){
            cin>>name>>marks;
            m[name]+=marks;
        }
        if(type==2){
            cin>>er;
            m.erase(er);
        }
        if(type==3){
            cin>>pr;
            map<string,int> ::iterator it=m.find(pr);
            if(it!=m.end()){
                cout<<m[pr]<<endl;
            }else{
                cout<<0<<endl;
            }
        }
    }

    return 0;
}
