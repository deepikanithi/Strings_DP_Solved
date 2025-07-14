#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[ i - 1]) continue;
            for(int j = i + 1; j < n;){
                int p = j + 1, q = n - 1;
                while(p < q){
                    long sum = (long)nums[i] + (long)nums[j] + (long)nums[p] + (long)nums[q];
                    if(sum < target){
                        p++;
                    }else if(sum > target){
                        q--;
                    }else{
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                        p++, q--;
                        while(p < q && nums[p] == nums[p - 1]) p++;
                        while(p < q && nums[q] == nums[q + 1]) q--;
                    }
                }
            j++;
            while(j < q && nums[j] == nums[j - 1]) j++;
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0; 
    vector<vector<int>> result = sol.fourSum(nums, target);
    for(const auto& quadruplet : result){
        for(int num : quadruplet){
            cout << num << " ";
        }
        cout << endl;
    }
}