#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
void out (int i){
   cout<<i<<" ";
}
int main(){
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0; i<n; i++){
      int a;
      cin>>a;
      v.push_back(a);
   }
   int m;
   cin>>m;
   for(int i=0; i<m; i++){
      int a;
      cin>>a;
      v.push_back(a);
   }
   sort(v.begin(), v.end());
   for_each(v.begin(), v.end(), out);
   return 0;
}