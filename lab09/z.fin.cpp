#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
   int n;
   cin>>n;
   map<string,int> m;
   map<string,int> :: iterator it;
   for(int i=0; i<n; i++){
      int sum;
      string name;
      cin>>name>>sum;
      m[name]=sum;
   }
   vector <int> v;
   int sum=0;
   cout<<"расходы : "<<endl;
   for(it=m.begin(); it!=m.end(); it++){
      cout<<it->first<<" - "<<it->second<<endl;
      sum+=it->second;
   }
   cout<<"общая сумма : "<<sum<<endl;
   return 0;
}