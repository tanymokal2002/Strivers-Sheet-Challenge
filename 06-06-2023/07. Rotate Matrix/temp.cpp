#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {


        //Brute Force:
        /*
        int n = matrix.size();
        vector<vector<int>> matrix2( n , vector<int> (n, 0)); 
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
               matrix2[j][n-1-i] = matrix[i][j];
            }
        }

        matrix = matrix2;
        */

        int n = matrix.size();
        for(int i=0; i<n-1; ++i){
            for(int j=i+1; j<n; ++j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; ++i){
            reverse(matrix[i].begin(), matrix[i].end());
        }



    }
};

int main(){
    Solution s;
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    s.rotate(vect);
    int n = vect.size();
    for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
               cout << vect[i][j] << " ";
            }
            cout << endl;
        }
}