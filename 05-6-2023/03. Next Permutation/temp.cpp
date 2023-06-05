#include<bits/stdc++.h>
using namespace std;

class Solution {
    
public:
    void nextPermutation(vector<int>& nums) {

        //STL Method:
        /*
        next_permutation(nums.begin(),nums.end());
        */

        //how the above next_permutation() works:
        if(nums.size() == 1){
            return;
        }

        int lastIdx = nums.size()-1;
        int idx1, idx2;
        for(int i=lastIdx-1; i>=0; --i){
            if(nums[i] < nums[i+1]){
                idx1 = i;//1
                break;
            }
        } 

        if(idx1 < 0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(int i=lastIdx; i>=idx1; --i){
                if(nums[i] > nums[idx1]){
                    idx2 = i;//4
                    break;
                }
            } 
            swap(nums[idx1], nums[idx2]);
            reverse(nums.begin()+idx1+1, nums.end());
        }
            
    }
};

int main(){
    Solution s;
    vector<int> vec = {1, 2, 3};
    s.nextPermutation(vec);
    for(auto x: vec){
        cout << x << " ";
    }
}