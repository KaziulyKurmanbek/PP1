#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void out(long long i){
    cout<<i<<" ";
}
int it=0;
long long p_pow(){
    if(it==0){
        it++;
        return 1;
    }
    long long res=1;
    for(int i=0; i<it; i++){
        res*=it;
    }
    it++;
    return res;
}
int main(){
    long n;
    cin>>n;
    vector<long long> v(n+1);
    generate(v.begin(), v.end(), p_pow);
    for_each(v.begin(), v.end(), out);
}