#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {


        /*
        //Brute Force = 
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> matrix2(matrix);
        for(int i=0; i<rows; ++i){
            for(int j=0; j<cols; ++j){
                if(matrix[i][j] == 0){
                    int r = rows, c = cols;
                    for(int x=0; x<c; ++x){
                        matrix2[i][x] = 0;
                    }
                    for(int x=0; x<r; ++x){
                        matrix2[x][j] = 0;
                    }
                }
            }
        }

        for(int i=0; i<rows; ++i){
            for(int j=0; j<cols; ++j){
                matrix[i][j] = matrix2[i][j];
            }
        }
        */

        /*
        //Better Approach:
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> v1(row, -1);
        vector<int> v2(col, -1);

        for(int i=0; i<row; ++i){
            for(int j=0; j<col; ++j){
                if(matrix[i][j] == 0){
                    v1[i] = 0;
                    v2[j] = 0;
                }
            }
        }

        for(int i=0; i<row; ++i){
            if(v1[i] == 0){
                for(int j=0; j<col; ++j){
                    matrix[i][j] = 0;
                }
            }
        }

        for(int i=0; i<col; ++i){
            if(v2[i] == 0){
                for(int j=0; j<row; ++j){
                    matrix[j][i] = 0;
                }
            }
        }

        */

        //Optimal Approach:
        int row = matrix.size();//3
        int col = matrix[0].size();//4
        

        bool isRow = false, isCol = false;

        for(int i=0; i<row; ++i){
            if(matrix[i][0] == 0){
                isRow = true;
            }
        }

        for(int i=0; i<col; ++i){
            if(matrix[0][i] == 0){
                isCol = true;
            }
        }

       

        for(int i=1; i<row; ++i){
            for(int j=1; j<col; ++j){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i=1; i<row; ++i){
            for(int j=1; j<col; ++j){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
        }


        if(isRow == true){
            for(int i=0; i<row; ++i){
                matrix[i][0] = 0;
            }
        }

        if(isCol == true){
            for(int i=0; i<col; ++i){
                matrix[0][i] = 0;
            }
        }



        
    }
};

int main(){
    Solution obj;
    vector<vector<int>> vect2d
    {
        {0, 1, 3},
        {4, 5, 6},
        {7, 0, 9}
    };
    obj.setZeroes(vect2d);
    for(int i=0; i<vect2d.size(); ++i){
        for(int j=0; j<vect2d[0].size(); ++j){
            cout << vect2d[i][j] << " ";
        }
        cout << endl;
    }
}