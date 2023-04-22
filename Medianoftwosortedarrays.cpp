#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1,nums2;
    nums1.push_back(3);

    nums2.push_back(-2);
    nums2.push_back(-1);


vector<int> third;
        double ans=0;
      int f=0,s=0;
        if(nums1.size()>nums2.size()){
            while(f<nums1.size() && s<nums2.size()){
                if(nums1[f]>nums2[s]){
                    third.push_back(nums2[s]);
                    s++;
                }else{
                     third.push_back(nums1[f]);
                    f++;
                }
            }
           if(s!=nums2.size()){
             for(int i=s;i<nums2.size();i++){
                third.push_back(nums2[i]);
            }
           }else{
             for(int i=f;i<nums1.size();i++){
                third.push_back(nums1[i]);
            }
           }
        }

        if(nums1.size()<nums2.size()){
            while(f<nums1.size() && s<nums2.size()){
                if(nums1[f]>nums2[s]){
                    third.push_back(nums2[s]);
                    s++;
                }else{
                     third.push_back(nums1[f]);
                    f++;
                }
            }
              if(s!=nums2.size()){
             for(int i=s;i<nums2.size();i++){
                third.push_back(nums2[i]);
            }
           }else{
             for(int i=f;i<nums1.size();i++){
                third.push_back(nums1[i]);
            }
           }
        }

        if(nums1.size()==nums2.size()){
               while(f<nums1.size() && s<nums2.size()){
                if(nums1[f]>nums2[s]){
                    third.push_back(nums2[s]);
                    s++;
                }else{
                     third.push_back(nums1[f]);
                    f++;
                }
                if(f==nums1.size() || s==nums2.size()){
                    break;
                }
            }


           if(f==nums1.size()){
              for(int i=s;i<nums2.size();i++){
                third.push_back(nums2[i]);
                }
           }else{
             for(int i=f;i<nums1.size();i++){
                third.push_back(nums1[i]);
            }
           }
        }

        for(auto ele:third){
            cout<<ele<<" ";
        }

        if((third.size())%2!=0){
            int medianindex=((third.size())/2);
            ans=third[medianindex];
        }else{
             int medianindex=(third.size()/2)-1;
             ans=(third[medianindex]+third[medianindex+1])/2.0;
        }

        cout<<endl<<ans;


    return 0;
}