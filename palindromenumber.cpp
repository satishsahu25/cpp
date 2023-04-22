#include <bits/stdc++.h>
using namespace std;

// *********converting int to string**********

// int y;
// int main(){
//     cin>>y;
//     string x=to_string(y);
//     int l=0;
//     int r=x.length()-1;
//     int flag=1;
//     while(l<=r){
//         if(x[l]!=x[r]){
//             flag=0;
//             break;
//         }
//         l++;
//         r--;
//     }

//     if(flag==1){
//         cout<<"palindrome";
//     }else{
//         cout<<"not a plaindrome";
//     }

//     return  0;
// }

// *********doing in int only**********

bool isPalindrome(int x)
{

    int newnum = 0;
    int orig=x;
    if (x < 0)
    {
        x = -x;
        while (x != 0)
        {
            int rem = x % 10;
            newnum = newnum * 10 + rem;
            x = x / 10;
        }
    }
    else
    {
        while (x != 0)
        {
            int rem = x % 10;
            newnum = newnum * 10 + rem;
            x = x / 10;
        }
    }

    if (orig == newnum)
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

    int x;
    cin >> x;
    cout << isPalindrome(x);

    return 0;
}