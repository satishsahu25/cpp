#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    pair<int, int> p1[N];
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin>>x>>y;
        p1[i].first = x;
        p1[i].second = y;
    }
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        if (p1[i].first == 1)
        {
            s.insert(p1[i].second);
        }
        if (p1[i].first == 2)
        {
            if ((s.find(p1[i].second) != s.end()))
            {
                s.erase(p1[i].second);
            }
        }
        if (p1[i].first == 3)
        {
            if ((s.find(p1[i].second) != s.end()))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
