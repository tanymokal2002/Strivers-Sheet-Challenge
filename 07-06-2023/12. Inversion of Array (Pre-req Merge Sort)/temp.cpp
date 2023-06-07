#include <bits/stdc++.h> 
using namespace std;
long long getInversions(long long *arr, int n){

    //Brute Force:
    //TC->O(n^2) SC->O(1)
  
    long long ans = 0;
    for(int i=0; i<n-1; ++i){
        for(int j=i+1; j<n; ++j){
            if(arr[i] > arr[j]){
                ans++;
            }
        }
    }
    return ans;
 


}

int main(){
    long long arr[] = {2, 5, 1, 3, 4};
    int n = 5;
    long long ans = getInversions(arr, n);
    cout << ans << endl;
}