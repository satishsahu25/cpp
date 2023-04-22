#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector <int> v;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x-1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);

    //printing of vectors
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}