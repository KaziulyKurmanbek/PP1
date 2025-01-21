#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool polind(vector<char>v){
   string s,s1;
   for(int i=0; i<v.size(); i++){
      s+=v[i];
   }
   s1=s;
   reverse(s1.begin(), s1.end());
   return s1==s;
}
int main(){
   vector<char> v;
   char s;
   while(cin>>s){
      v.push_back(s);
   }
   sort(v.begin(), v.end());
   do{
      if(polind(v)){
         cout<<"ZA WARUDO TOKI WO TOMARE"<<endl;
         return 0;
      }
   }while(next_permutation(v.begin(), v.end()));
   cout<<"JOJO"<<endl;
   return 0;
}