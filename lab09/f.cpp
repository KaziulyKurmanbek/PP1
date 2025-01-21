#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    map<string, double> m;
    map<string, double> :: iterator it;
    int n;
    double sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        for(int j=0; j<a; j++){
            double number;
            string city;
            cin>>city>>number;
            sum+=number;
            m[city]+=number*100;
        }
    }
    map<string, double> percent;
    map<string, double> :: iterator iter;
    for(it=m.begin(); it!=m.end(); it++){
        percent[it->first]=(it->second/sum);
    }
    for(iter=percent.begin(); iter!=percent.end(); iter++){
        cout<<iter->first<<" "<<iter->second<<endl;
    }
}