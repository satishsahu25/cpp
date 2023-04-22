#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k){
         int initial=0;
         int width=k;
         int max;
	while((width<=n)){
         max=arr[initial];
        for(int i=initial;i<width;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
     }
     cout<<max<<" ";
     initial++;
     width++;
    }
    cout<<endl;

}
// contiguous subarrays of size=3 from  1,2,3,4,5,6 are
// 123,234,345,456

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}