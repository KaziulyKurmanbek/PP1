#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int changes( vector<int> v , vector<int> v_sorted){
   int s=0;
   for(int i=0; i<v.size(); i++){
      if(v[i]!=v_sorted[i]){
         s++;
         if(s>2){
            return false;
         }
      }
   }
   return true;
}
int main(){
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++){
      cin>>v[i];
   }
   vector<int> v_sorted=v;
   sort(v_sorted.begin(), v_sorted.end());
   if(changes(v,v_sorted)){
      cout<<"YES"<<endl;
   }else{
      cout<<"NO"<<endl;
   }
   return 0;
}