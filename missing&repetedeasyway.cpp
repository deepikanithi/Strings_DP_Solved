#include <iostream>
#include <vector>   
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<int> res(2, -1);
    vector<int> frequency(n*n + 1, 0);   //frequency[0] is unused, we use 1 to n*n
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            frequency[grid[i][j]]++;
        }
    }
    for(int i = 1; i <= n*n; i++){
        if(frequency[i] == 2)
            res[0] = i;
        else if(frequency[i] == 0)
            res[1] = i;
    }
    return res;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 8}};
    vector<int> result = sol.findMissingAndRepeatedValues(grid);
    cout << "Repeated Value: " << result[0] << ", Missing Value: " << result[1] << endl;
    return 0;
}