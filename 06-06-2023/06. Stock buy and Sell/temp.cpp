#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //Brute Force Approach:
        /*
        int maxP = 0, n = prices.size();
        for(int i=0; i<n; ++i){
            
            for(int j=i+1; j<n; ++j){
                int diff = prices[j] - prices[i];
                maxP = max(diff, maxP);
            }
        }
        return maxP;
        */

        //Optimal Solution:
        int n = prices.size();
        int maxP = 0,  minEl = prices[0];
        for(int i=1; i<n; ++i){
            int cost = prices[i]-minEl;
            maxP = max(maxP, cost);
            minEl = min(minEl, prices[i]);
        }
        return maxP;
        


    }
};

int main(){
    Solution s;
    vector<int> vec = {7, 1, 5, 3, 6, 4};
    int ans = s.maxProfit(vec);
    cout << ans << endl;
}