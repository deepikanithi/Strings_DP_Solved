#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> se;
        for(int i = 0; i < n; i++){
            int target = -nums[i];
            set<int> s;
            for(int j = i + 1; j < n; j++){
              int third = target - nums[j];
              if(s.find(third) != s.end()){
                vector<int> found = {nums[i], nums[j], third};
                sort(found.begin(), found.end());
                se.insert(found);
              }
              s.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(se.begin(), se.end());
        return ans;
    }
};
int main(){
  Solution sol;
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> result = sol.threeSum(nums);
  for(const auto& triplet : result) {
    for(int num : triplet) {
      cout << num << " ";
    }
    cout << endl;
  }
}