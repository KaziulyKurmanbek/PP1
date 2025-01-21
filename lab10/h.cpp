#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n,q;
    cin>>n;
    map<int,int> m;
    map<int,int> :: iterator it;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        ++m[q];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        if (m.find(a) != m.end()) {
            cout << m[a] << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}