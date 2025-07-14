#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int result;
        vector<int> vec(n + 1, 0);
        for(int i = 0; i < n; i++){
            vec[nums[i]]++;
        }
        for(int i = 1; i <= n; i++){
            if(vec[i] >= 2){
              result = i;
              break;
            }
        }
        return result;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1, 3, 4, 2, 2};
    int result = sol.findDuplicate(nums);
    cout << "Duplicate Value: " << result << endl;
    return 0;
}