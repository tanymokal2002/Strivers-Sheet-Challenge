#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        vector<int> curr = intervals[0];
        for(int i=1; i<intervals.size(); ++i){
            if(curr[1] < intervals[i][0]){
                ans.push_back(curr);
                curr = intervals[i];
            }
            else{
                curr[1] = max(curr[1], intervals[i][1]);
            }
        }
        ans.push_back(curr);
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> intervals = {
        {1, 3}, {2, 6}, {8, 20}, {15, 18}
    };
    vector<vector<int>> vect = s.merge(intervals);
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }    
        cout << endl;
    }
    
}