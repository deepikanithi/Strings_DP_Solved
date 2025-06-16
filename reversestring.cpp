#include <iostream>
#include <vector>
using namespace std;
// Problem: Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int st = 0, en = n - 1;
        while(st < en){
            swap(s[st], s[en]);
            st++;
            en--;
        }
    }
};
int main(){
    Solution sol;
    vector<char> s  {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(s);
    for(char c : s){
        std::cout << c << " ";
    }
}