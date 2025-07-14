#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       int row = grid.size();
       int col = grid[0].size();
       int n = row * col;
       unordered_set<int> s;
       vector<int> result;
       int actualSum = 0, expectedSum = 0;
       int a, b;
       for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            actualSum += grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
               a = grid[i][j];
               result.push_back(a);
            }
            s.insert(grid[i][j]);
        }
       }
       expectedSum = n * (n + 1) / 2;
       b = expectedSum + a - actualSum;
       result.push_back(b);
       return result;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 8}};
    vector<int> result = sol.findMissingAndRepeatedValues(grid);
    cout << "Repeated Value: " << result[0] << ", Missing Value: " << result[1] << endl;
    return 0;
}