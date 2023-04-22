#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
     pair<int, int> p1[q];
    for (int k = 0; k < q; k++)
    {
        int x, y;
        p1[k] = {x, y};
    }
   for(int i=0;i<q;i++){
     cout << v[p1[i].first][p1[i].second] << endl;
   }


    return 0;
}