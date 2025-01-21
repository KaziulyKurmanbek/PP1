#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<vector<int> > v;
   for(int i=0; i<n; i++){
      vector<int> v1(3);
      for(int i=0; i<3; i++){
         cin>>v1[i];
      }
      v.push_back(v1);
   }
   sort(v.begin(), v.end());
   for(int i=0; i<v.size(); i++){
      for(int j=0; j<3; j++){
         cout<<v[i][j]<<" ";
      }
      cout<<endl;
   }
   return 0;
}