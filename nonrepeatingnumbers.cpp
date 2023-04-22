#include <bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int> nums)
    {
        // Code here.
        vector<int> v;
       int xxory=0;
       for(auto ele:nums){
        xxory=xxory^ele;
       }
       int rightbitsetmask=xxory & -xxory; //uska and usi ke negative ke sath
       int x=0,y=0;
       for(auto ele:nums){
        if((ele & rightbitsetmask)==0){ //ab jiska bhi rightbitset hoga vahi zero dega answer
        x=x^ele;
        }else{
            //jinka nahi set hai rightbit vo idhar ayenge toh hum
            //zero ke sath xor lekar vo number pata kar sakte the
            y=y^ele;
        }
       }
    if(x>y){
       v.push_back(y);
        v.push_back(x);
    }else{
          v.push_back(x);
       v.push_back(y);
    }
       return v;


    }

int main() {
    vector<int> lin;
    lin.push_back(1);
    lin.push_back(2);
    lin.push_back(1);
    lin.push_back(3);
    lin.push_back(2);
    lin.push_back(4);

    vector<int>ans=singleNumber(lin);
    for(auto ele:ans){
        cout<<ele<<" ";
    }

    return 0;
}
