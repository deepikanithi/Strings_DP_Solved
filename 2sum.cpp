#include <iostream>
#include <vector>   
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> res;
    for(int i = 0; i < nums.size(); i++){
        int first = nums[i];
        int second = target - first;
        if(res.find(second) != res.end()){
            return {res[second], i};
        }
        res[first] = i;
    }
    return {};
    }
};
int main(){
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    return 0;
}