#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(1440, 0);
    int sum=n;
    for(int i=0; i<n; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int start=a*60+b;
        int finish=c*60+d;
        int during=finish-start;
        if(during<=0){
            sum--;
        }
        for(int i=0; i<during; i++){
            v[(start+i)%1440]++;
        }
    }
    int ans=0;
    for(int i=0; i<=1440;i++){
        if(v[i]==sum){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}