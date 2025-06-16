#include <string>
#include<iostream>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        // s.find(part) < s.length() here if part is not in s it return some random higher value.
        // That's why the start position returned by s.find(part) 
        // we need to check that less than s.length() value or not.
        while(s.length() > 0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
int main() {
    Solution sol;
    string s = "daabcbaabcbc";
    string part = "abc";
    string result = sol.removeOccurrences(s, part);
    cout << "Resulting string: " << result << endl; // Expected output: "dab"
    return 0;
}