#include <bits/stdc++.h>
using namespace std;
void score(vector<long int> &v)
{
    vector<int> ans;
    int count=0;
    for (auto ele : v)
    {
        if (ele == 1 || ele==2){
            ans.push_back(1);
            count++;
        }
        else
        {
            if (ele % 2 == 0)
            {
                ans.push_back(ele / 2 - 1);
                count++;
            }
            else
            {
              ans.push_back(ele / 2);
              count++;
            }
        }
    }

   for(int i=0;i<count;i++){
    cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
   }
}

int main()
{

    int t;
    cin >> t;
    int i = 0;
    vector<long int> v;
    while (i < t)
    {
        long int x;
        cin >> x;
        v.push_back(x);
        i++;
    }
    score(v);
    return 0;
}