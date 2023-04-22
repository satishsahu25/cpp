   #include <bits/stdc++.h>

using namespace std;
 int maxIndexDiff(int A[], int N)
    {
     int i=0,j=0;
        int prevdiff=0;
        while(i<N && j<N && prevdiff<=N-i){
            if(A[i]<=A[j]){
                int cudiff=j-i;
                if(prevdiff<=cudiff){
                    prevdiff=cudiff;
                }
            }
            if(j==N-1){
                i++;
                j=i+1;
            }
               j++;
        }
        return prevdiff;
        

    //    // Your code here
    //     vector<int>diff;
    //     for(int i=0;i<N;i++){
    //         for(int j=i+1;j<N;j++){
    //             if(A[i]<=A[j]){
    //                 diff.push_back(j-i);
    //             }
    //         }
    //     }
    //     if(diff.empty()){

    //         return 0;
    //     }
    //     else{
    //         int maxx=*(max_element(diff.begin(),diff.end()));

    //     return maxx;
        // }

    }


int main() {
int A[9] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
  cout<<maxIndexDiff(A, 9);
    return 0;
}