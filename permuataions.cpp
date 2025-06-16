// Brute's force approach to find all possible permutations of a string
#include <iostream>
#include <string>
#include <algorithm>
void possiblePermutations(std::string& s, int index){
    if(index == s.length()){
        std::cout<< s << std::endl;
        return;
    }
    for(int i = index; i < s.length(); i++){ //0;2
        std::swap(s[i], s[index]);
        possiblePermutations(s, index+1);
        std::swap(s[index], s[i]);
    }
}
int main() {
    // int n = 123;
    // std::string s = std::to_string(n);
    // std::string s = str(s);
    std::string s = "abc"; // Example string
    possiblePermutations(s, 0);
    return 0;
}