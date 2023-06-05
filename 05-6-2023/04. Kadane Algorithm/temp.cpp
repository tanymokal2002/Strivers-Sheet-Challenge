#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        //brute FOrce:
        /*
        if(nums.size() == 1){
            return nums[0];
        }
        int maxSum = INT_MIN;
        for(int i=0; i<nums.size(); ++i){
            for(int j=i; j<nums.size(); ++j){
                int sum = 0;
                int k=i;
                for(;k<=j; ++k){
                    sum += nums[k];
                }
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
        */

        //Better Approach:
        /*
        int maxSum = INT_MIN;
        for(int i=0; i<nums.size(); ++i){
            int sum = 0;
            for(int j=i; j<nums.size(); ++j){
                sum += nums[j];
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
        */

        //Optimal Approach:
    
        int maxSum = INT_MIN;
        int sum = 0;
        for(int i=0; i<nums.size(); ++i){
            sum+=nums[i];
            if(sum > maxSum){
                maxSum = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return maxSum;
        
    }
};

int main(){
    Solution s;
    vector<int> vect = {5, -4, -2, 6, -1};
    int ans = s.maxSubArray(vect);
    cout << ans << endl;
}