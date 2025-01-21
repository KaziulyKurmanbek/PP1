#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
   vector<char> v;
   string s;
   cin>>s;
   for(int i=0; i<s.size(); i++){
      v.push_back(s[i]);
   }
   reverse(v.begin(), v.end());
   for(int i=0; i<v.size(); i++){
      cout<<v[i];
   }
   cout<<endl;
   return 0;
}