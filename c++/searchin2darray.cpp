#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 13;
    int row=matrix.size();
    int col=matrix[0].size();
    vector<int>neww;
    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            neww.push_back(matrix[i][j]);
        }
    }
    for(int i=0;i<neww.size();i++){
        cout<<neww[i]<<" ";
    }
    return 0;
}