#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        //Brute Force:
        ///TC->O(m*n)
        /*
        int m = matrix.size(), n = matrix[0].size();
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
        */

        //Optimal SOlution:
        int m=matrix.size(), n=matrix[0].size();
        int s = 0;
        int e = (m*n)-1;

        while(s <= e){
            int mid = (s + (e-s)/2);
            if(matrix[mid/n][mid%n] == target){
                return true;
            }
            else if(matrix[mid/n][mid%n] < target){
                s++;
            }
            else{
                e--;
            }
        }

        return false;


    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {25, 30, 34, 50}
    };
    bool ans = s.searchMatrix(matrix, 30);
    cout << ans << endl;
    
}