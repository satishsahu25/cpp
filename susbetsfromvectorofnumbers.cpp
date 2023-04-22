#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;
void generate(vector<int> subset, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        subsets.push_back(subset);
        return;
    }
    generate(subset, i + 1, nums);
    // oth index element get pushback from here first time
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
}

int main()
{
    int n;
    vector<int> nums;
    vector<int> empty;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    generate(empty, 0, nums);
    for (auto sub:subsets){
        for( auto ele :sub){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return 0;
}