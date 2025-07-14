#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool findElement(vector<vector<int>>& matrix, int target, int midRow){ //O(log n)
        int col = matrix[0].size();
        int st = 0, en = col - 1;
        while(st <= en){
            int mid = st + (en - st) / 2;
            if(target == matrix[midRow][mid]){
                return true;
            }
            else if(target > matrix[midRow][mid]){
                st = mid + 1;
            }
            else{
                en = mid - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) { //O(log m)
        int row = matrix.size(), col = matrix[0].size();
        int startRow = 0, endRow = row - 1, endCol = col - 1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow) / 2;
            if(target >= matrix[midRow][0] && target <= matrix[midRow][endCol]){
                // found row
                return findElement(matrix, target, midRow);
            }
            else if(target > matrix[midRow][endCol]){
                startRow = midRow + 1;
            }
            else{
                endRow = midRow - 1;
            }
        }
        return false;
    }
};
int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    Solution sol;
    cout << sol.searchMatrix(matrix, 3) << endl; // true
    cout << sol.searchMatrix(matrix, 13) << endl; // false
    return 0;
}