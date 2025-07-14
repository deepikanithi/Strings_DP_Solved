#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int strow = 0, enrow = m - 1, stcol = 0, encol = n - 1;
        vector<int> ans;
        while(strow <= enrow && stcol <= encol){
            // Top
            for(int i = stcol; i <= encol; i++){
                ans.push_back(mat[strow][i]);
            }
            // Right
            for(int i = strow + 1; i <= enrow; i++){
                ans.push_back(mat[i][encol]);
            }
            // Bottom
            for(int i = encol - 1; i >= stcol; i--){
                if(strow == enrow){
                    break;
                }
                ans.push_back(mat[enrow][i]);
            }
            // Left
            for(int i = enrow - 1; i >= strow + 1; i--){
                if(stcol == encol){
                    break;
                }
                ans.push_back(mat[i][stcol]);
            }
            strow++, stcol++;
            enrow--, encol--;
        }
        return ans;
    }
};
int main(){
    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> b = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    Solution sol;
    vector<int> result1 = sol.spiralOrder(a);
    for(int num : result1) cout << num << " ";
    cout << endl;

    vector<int> result2 = sol.spiralOrder(b);
    for(int num : result2) cout << num << " ";
    cout << endl;

    return 0;
}