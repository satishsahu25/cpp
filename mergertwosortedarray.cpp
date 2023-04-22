#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v1.push_back(32);
    v1.push_back(50);

    v2.push_back(11);
    v2.push_back(13);
    v2.push_back(15);
    v2.push_back(20);

    vector<int> merged;
    int f=0,s=0;

    if(v1.size()>v2.size()){
        while(s<v2.size()){
            if(v1[f]>v2[s]){
                merged.push_back(v2[s]);
                s++;
            }else{
                merged.push_back(v1[f]);
                f++;
            }
        }
       for(int i=f;i<v1.size();i++){
         merged.push_back(v1[i]);
       }
    }else{
         while(f<v1.size()){
            if(v1[f]>v2[s]){
                merged.push_back(v2[s]);
                s++;
            }else{
                merged.push_back(v1[f]);
                f++;
            }
        }
       for(int i=s;i<v2.size();i++){
         merged.push_back(v2[i]);
       }
    }

    for(auto ele:merged){
        cout<<ele<<" ";
    }




    return 0;
}