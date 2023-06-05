#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //Optimal Solution:
        //TC = 
        //SC =
        vector<vector<int>> ans;
        for(int i=0; i<numRows; ++i){
            vector<int> v(i+1, 1);
            for(int j=1; j<i; ++j){
                v[j] = ans[i-1][j] + ans[i-1][j-1];
            }
            ans.push_back(v);
        }
        return ans;
    }
};

int main(){
    
    Solution s;
    vector<vector<int>> vect = s.generate(4);
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }    
        cout << endl;
    }
    

}