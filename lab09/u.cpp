#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool isSimilar(vector<int>v, vector<int>vd){
   int sum=0;
   for(int i=0; i<v.size(); i++){
      if(v[i]!=vd[i]){
         sum++;
         if(sum>1){
            return false;
         }
      }
   }
   return true;
}
int main(){
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++){
      cin>>v[i];
   }
   vector<int> v_sort=v;
   sort(v_sort.begin(), v_sort.end());
   
   if(isSimilar(v, v_sort)){
      cout<<"YES"<<endl;
   }else{
      cout<<"NO"<<endl;
   }
   return 0;
}