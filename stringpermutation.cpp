// Finding permutation of a string using STL in c++17
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   string s = "abc";
   vector<string> vec;
   sort(s.begin(), s.end());
   do{
       vec.push_back(s);
   }while(next_permutation(s.begin(), s.end()));
   for(const string& s: vec){
       cout << s << endl;
   }
   return 0;
}