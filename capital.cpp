#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1e9+7
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) cc.begin(), c.end()
// #define mini(a, b, c) min(c, min(a, b))
// #define mini(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
bool isPrime(int n){
if(n==1) return false;
if(n==2) return true;
for(int i=2;i*i<=n;i++){
     if(n%i==0) return false;
}
return true;
}

int32_t main(){

    string str;
    getline(cin,str);

    for (int i=0;i<str.size();i++)
    {
        if(str[i]==' '){
            cout<<"\n";
           i++;
        }
        cout<<char(str[i]-32);
    }

return 0;
}
