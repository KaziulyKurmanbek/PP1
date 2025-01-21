#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool isCor(vector<int>v, int k){
   int sum=0;
   for(int i=0; i<v.size(); i++){
      if(v[i]==i+1){
         sum++;
      }
   }
   if(sum==k){
      return true;
   }
   return false;
}

int main(){
   int n,k;
   cin>>n>>k;
   vector<int> v;
   vector<int> :: iterator it;
   for(int i=1; i<=n; i++){
   v.push_back(i);
   }
   int sum_cor=0;
   do{
      if(isCor(v, k)){
         sum_cor++;
      }
   }while(next_permutation(v.begin(), v.end()));
   cout<<sum_cor<<endl;
   return 0;
}