#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //Brute Force:
        //TC->O(nlogN + N) , SC->O(1)
        /*
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; ++i){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return -1;
        */

        //Brute Force using hash Solution:
        //TC -> O(n), SC -> O(n)
        /*
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; ++i){
            mp[nums[i]]++;
            if(mp.at(nums[i]) > 1){
                return nums[i];
            }
        }
        return -1;
        */

        //Better Solution:
        //TC->O(n) SC->O(1)
        /*
        int n = nums.size();
        for(int i=0; i<n; ++i){
            int x = abs(nums[i]);
            if(nums[x] > 0){
                nums[x] *= -1;
            }
            else{
                return x;
            }
        }
        return -1;
        */

        //Optimal Solution:
        //TC->O(n) SC->O(1)
        int t = nums[0], h = nums[0];

        do{
            t = nums[t];
            h = nums[nums[h]];
        } while(t != h);

        h = nums[0];

        while(t != h){
            t = nums[t];
            h = nums[h];
        }

        return t;


    }
};

int main(){
    Solution s;
    vector<int> vec = {1, 3, 4, 2, 2};
    int ans = s.findDuplicate(vec);
    cout << ans << endl;
}