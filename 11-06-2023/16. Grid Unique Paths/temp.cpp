#include<bits/stdc++.h>
using namespace std;

class Solution {

public:

    //Approach1: TC->Exponentital and SC->Exponentitalc
    // int helper(int i, int j, int m, int n){
    //     if(i==n-1 && j==m-1) return 1;
    //     if(i>=n || j>=m) return 0;
    //     else return helper(i+1, j, m, n) + helper(i, j+1, m, n);
    // }
    

public:
    //Approach 2: TC->O(n*m) and SC->O(n*m)
    /*
    int dp[101][101]{};
    int uniquePaths(int m, int n, int i = 0, int j = 0) {
        if(i >= m || j >= n) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j] = uniquePaths(m, n, i+1, j) + uniquePaths(m, n, i, j+1);
    }
    */

   //Approach 3: using NcR
    //TC->O(m-1) or O(n-1)
    //Sc->O(1);
    int uniquePaths(int m, int n){
        int N = n+m-2;
        int R = m-1;
        double res = 1;
        for(int i=1; i<=R; ++i){
            res = res * (N-R+i)/i;
        }
        return (int)res;
    }


};

int main(){
    Solution s;
    int ans = s.uniquePaths(3, 2);
    cout << ans << endl;
}