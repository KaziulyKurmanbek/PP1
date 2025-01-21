#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
   vector<char> s;
   vector<char> :: iterator it;
   char v;
   while(cin>>v){
      s.push_back(v);
   }
   cout<<"The anagram variants for string ";
   for(int i=0; i<s.size(); i++){
      cout<<s[i];
   }
   sort(s.begin(), s.end());
   cout<<" are:"<<endl;
   do{
      for(int i=0; i<s.size(); i++){
         cout<<s[i];
      }
      cout<<endl;
   }while(next_permutation(s.begin(), s.end()));
}