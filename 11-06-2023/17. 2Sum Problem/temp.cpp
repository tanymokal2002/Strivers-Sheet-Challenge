#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;
        int n = nums.size();
        
        //Approach 1: Brute Force looping twice
        //TC->O(n^2) SC->O(1)
        /*
        for(int i=0; i<n-1; ++i){
            for(int j=i+1; j<n; ++j){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }

        return ans;
        */

        //Approach 2: Using Hashing
        //TC->O(n) SC->O(n)
        /**/
        unordered_map<int, int> m;
        for(int i=0; i<n; ++i){
            int r = target-nums[i];
            if(m.find(r) != m.end()){
                ans.push_back(m[r]);
                ans.push_back(i);
                break;
            }
            else{
                m[nums[i]] = i;
            }
        }
        return ans;
       
        
       

    }
};

int main(){
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = s.twoSum(nums, target);
    for(auto x : ans) cout << x << " ";
    
}