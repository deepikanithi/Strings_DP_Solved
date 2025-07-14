#include <vector>
#include <string>
#include <iostream>
class Solution {
public:
    int compress(std::vector<char>& chars) {
        int n = chars.size();
        int ptr = 0;
        for(int i = 0; i < n; i++){
            char c = chars[i];
            int count = 0;
            while(i < n && chars[i] == c){
                count++, i++;
            }
            if(count == 1){
              chars[ptr++] = c;
            }
            else if(count > 1){
               chars[ptr++] = c;
               for(auto i: std::to_string(count)){
                    chars[ptr++] = i;
               }
            }
            i--;
        }
        return ptr;
    }
};
int main(){
    std::vector<char> chars = {'a','a','b','c','c','c'};
    Solution sol;
    int result = sol.compress(chars);
    std::cout << result << std::endl;
    return 0;
}