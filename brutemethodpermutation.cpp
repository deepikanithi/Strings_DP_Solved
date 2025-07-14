#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void possiblePermutations(string& s, int index, vector<string>& result){
    if(index == s.length()){
        result.push_back(s);
        return;
    }
    for(int i = index; i < s.length(); i++){ //0;2
        swap(s[i], s[index]);
        possiblePermutations(s, index+1, result);
        swap(s[index], s[i]);
    }
}
int main() {
    string s = "aba";
    string s2 = "aeibaaiba";
    vector<string> result;
    possiblePermutations(s, 0, result);
    for(auto i : result){
     cout << i << endl;
    }
    bool is_true = false;
    for(auto i : result){
        if(s2.find(i) != string::npos){
           is_true = true;
           break;
        }
    }
    cout << (is_true ? "True" : "False") << endl;
    return 0;
}