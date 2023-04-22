#include <bits/stdc++.h>

using namespace std;

int main() {
    string s="12:00:01PM";
    s.erase(2);
    stringstream geek(s);
    int x=0;
    geek>>x;
    cout<<x+1;
    //prints 13
    return 0;
}