#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> vec;
        set<vector<int>> s;
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                for(int k = j + 1; k <  n; k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> v = {nums[i], nums[j], nums[k]};
                        sort(v.begin(), v.end());
                        if(s.find(v) == s.end()){
                            s.insert(v);
                            vec.push_back(v);
                        }
                    }
                }
            }
        }
        return vec;   
    }
};
int main(){
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(nums);
    for (const auto& triplet : result) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
}