
#include <bits/stdc++.h>

using namespace std;
string timeConversion(string s) {
    string res;
    string temp=s;
    if(s[8]=='A'){
        //AM
        if(s[0]=='1' && s[1]=='2'){
            res="00"+temp.substr(2,6);
        }else{
            res=temp.erase(8);
        }

    }else{
        //PM
         if(s[0]=='1' && s[1]=='2'){
            res="12"+temp.substr(2,6);
        }else{
            int num=0;
            stringstream twelveplus(temp.substr(0,2));
            twelveplus>>num;
            res=to_string(num+12)+temp.substr(2,6);
        }

    }
    return res;

}

int main() {
    string s="12:01:00PM";
    cout<<timeConversion(s);
    return 0;
}
