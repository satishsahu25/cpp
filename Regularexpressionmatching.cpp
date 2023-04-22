#include<bits/stdc++.h>
using namespace std;

bool solution(string s, string p){
    bool dp[p.length()+1][s.length()+1];
    for(int i=0;i<p.length();i++){
        for(int j=0;j<s.length();j++){
            if(i==0 && j==0){
                dp[i][j]=true;
            }else if(i==0){
                dp[i][j]=false;
            }else if(j==0){
                char pc=p[i-1];
                if(pc=='*'){
                    dp[i][j]=dp[i-2][j];
                }else{
                    dp[i][j]=false;
                }
            }else{
                char pc=p[i-1];
                char sc=s[j-1];
                if(pc=='*'){
                    dp[i][j]=dp[i-2][j];
                    char patternseclastchar=p[i-2];
                    if(patternseclastchar=='.' || patternseclastchar==sc){
                        dp[i][j]=dp[i][j]||dp[i][j-1];
                    }

                }else if(pc=='.'){
                    dp[i][j]=dp[i-1][j-1];
                }else if(pc==sc){
                    dp[i][j]=dp[i-1][j-1];
                }else{
                    dp[i][j]=false;
                }
            }
        }
    }

    return dp[p.length()][s.length()];
}


int main(){



    return  0;
}