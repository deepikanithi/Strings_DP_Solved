#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isfreqsame(int freq[26], int winfreq[26]){
        for(int i = 0; i < 26; i++){
            if(freq[i] != winfreq[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0; i < s1.length(); i++){
            freq[s1[i] - 'a']++;
        }
        int windowsize = s1.length();
        for(int i = 0; i < s2.length(); i++){
            int index = 0, idx = i;
            int winfreq[26] = {0};
            while(index < windowsize && idx < s2.length()){
                winfreq[s2[idx] - 'a']++;
                index++, idx++;
            }
            if(isfreqsame(freq, winfreq)){
                return true;
            }
        }
    return false;
    }
};
int main(){
    Solution sol;
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool result = sol.checkInclusion(s1, s2);
    cout << (result ? "True" : "False") << endl;
    return 0;
}