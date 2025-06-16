#include <iostream>
#include <string>
#include <cctype> // for isalnum and tolower
// class Solution {
// public:
//     bool isPalindrome(std::string s) {
//         int st = 0, en = s.length() - 1;
//         while(st < en){
//             if(!std::isalnum(s[st])){
//                 st++;
//                 continue;
//             }
//             else if(!std::isalnum(s[en])){
//                 en--;
//                 continue;
//             }
//             else if(std::tolower(s[st]) != std::tolower(s[en])){
//                 return false;
//             }
//             else{
//                 st++;
//                 en--;
//             }
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isAlphanum(char ch){
        if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
        }
        else{
            return false;
        }
    }
    bool isPalindrome(std::string s) {
        int st = 0, en = s.length() - 1;
        while(st < en){
            if(!isAlphanum(s[st])){
                st++;continue;
            }
            if(!isAlphanum(s[en])){
                en--;continue;
            }
            if(tolower(s[st]) != tolower(s[en])){
                return false;
            }
            st++; en--;
        }
        return true;
    }
};
int main() {
    Solution sol;
    std::string s = "A man, a plan, a canal: Panama";
    bool result = sol.isPalindrome(s);
    if(result) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    return 0;
}