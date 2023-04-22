#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int len=s.size();
    vector<vector<char>> v;
    vector<char> vec;
    int i=0,j=0;
    for(int i=0;i<len;i++){
       vec.push_back( s[i]);
        for(int j=0;j<len;j++){
            vec.push_back(s[j]);
            for(auto ele:vec){
                cout<ele<<endl;
            }
        }
        vec.clear();
    }


    return 0;
}