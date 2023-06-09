#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //Approach 1: two loops
        //TC->O(n^2)
        /*
        int n = nums.size();
        if(n==1) return nums[0];
        int x = n/2;
        int ans = -1;
        for(int i=0; i<n-1; ++i){
            int cnt = 1;
            for(int j=i+1; j<n; ++j){
                if(nums[i] == nums[j]){
                    cnt++;
                }
            }
            if(cnt > x){
                ans = nums[i];
                break;
            }
        }
        return ans;
        */

        //Approach 2: hashing
        //TC -> O(n)
        //SC -> O(n)
        /*
        int n = nums.size(), x = n/2;
        unordered_map<int, int> m;
        for(int i=0; i<n; ++i){
            m[nums[i]]++;
            if(m.at(nums[i]) > x){
                return nums[i];
            }
        }
        return -1; 
        */       

        // Approach 3: Using sorting
        /*
        int n = nums.size();
        int x = n/2;
        sort(nums.begin(), nums.end());
        return nums[n/2];
        */

        //Approach 3: Moore's voting algorithm     
        int n = nums.size();
        int x = n/2;
        int  el, cnt=0;
        for(int i=0; i<n; ++i){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }

        cnt = 0;
        for(int i=0; i<n; ++i){
            if(nums[i] == el) cnt++;
        }
        int ans = -1;
        if(cnt > x){
            ans = el;
        }

         
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> vec = {7, 1, 5, 3, 6, 4};
    int ans = s.majorityElement(vec);
    cout << ans << endl;
}