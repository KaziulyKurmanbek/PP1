#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(char ch1, char ch2){
   return ch1>ch2;
}
int main(){
   vector<char> v;
   string s;
   cin>>s;
   for(int i=0; i<s.size(); i++){
      v.push_back(s[i]);
   }
   sort(v.begin(), v.end(), cmp);
   do{
      for(int i=0; i<v.size(); i++){
         cout<<v[i];
      }
   }while(prev_permutation(v.begin(), v.end()));
   return 0;
}