#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        //initial Approach:
        // sort(nums.begin(), nums.end());

        //Better Approach:
        /*
        int numZ = 0, num1 = 0, num2 = 0;
        for(int i=0; i<n; ++i){
            if(nums[i] == 0) numZ++;
            if(nums[i] == 1) num1++;
            if(nums[i] == 2) num2++;
        }

        int i=0;
        for(; i<numZ; ++i){
            nums[i] = 0;
        }

        int j=i;
        for(; j<num1+i; ++j){
            nums[j] = 1;
        }

        int k=j;
        for(; k<num2+j; ++k){
            nums[k] = 2;
        }

        */

        //Optimal Approach:
        int low = 0, mid = 0, high = n-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++, mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }


    }
};

int main(){
    Solution s;
    vector<int> vect = {2, 0, 2, 1, 1, 0};
    s.sortColors(vect);
    for( auto it: vect){
        cout << it << " ";
    }
}