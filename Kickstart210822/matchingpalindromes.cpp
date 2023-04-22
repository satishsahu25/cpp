#include <bits/stdc++.h>
using namespace std;

void checkplain(string s, vector<string> &str)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return;
        }
        else
        {
            i++;
            j--;
        }
    }
   
    str.push_back(s);
}
bool checkplain(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

void palindrome(vector<pair<int, string>> &strings)
{
    vector<string> substrings;
    for (auto ele : strings)
    {
        int size = ele.first;
        string s = ele.second;

        vector<string> str;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {

                checkplain(s.substr(i, j), str);

            }
        }
        string newstring;
        int i=0;
        for (i=0;i<str.size();i++)
        {
            newstring = s +str[i];
            if (checkplain(newstring))
            {
                substrings.push_back(str[i]);

                break;
            }
        }
        str.clear();
    }

    for (int i = 0; i < substrings.size(); i++)
    {
        cout << "Case #" << i + 1 << ": " << substrings[i] << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    int i = 0;
    vector<pair<int, string>> v;
    while (i < t)
    {
        long int x;
        cin >> x;
        string s;
        cin >> s;
        v.push_back({x, s});
        i++;
    }
    palindrome(v);

    return 0;
}