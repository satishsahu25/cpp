#include <bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    // Your code here
    stack<int> s;
    unordered_map<char, int> map = {{'[', -1}, {']', 1}, {'{', -2}, {'}', 2}, {'(', -3}, {')', 3}};

    for (auto ch : x)
    {

        if (map[ch] < 0)
        {
            s.push(map[ch]);
        }
        else
        {
            if (s.empty())
                return false;
            if (s.top() == -map[ch])
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << ispar("[()]{}{[()()]()");
    return 0;
}