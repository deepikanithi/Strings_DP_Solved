#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
      int row = mat.size();
      int start = 0, end = mat[0].size() - 1;
      while(start < row && end >= 0){
        if(target == mat[start][end]){
            return true;
        }
        else if(target > mat[start][end]){
            start += 1;
        }
        else{
            end -= 1;
        }
      }
      return false; 
    }
};
int main(){
    vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    Solution sol;
    cout << sol.searchMatrix(mat, 3) << endl; // true
    cout << sol.searchMatrix(mat, 13) << endl; // false
    return 0;
}