#include <iostream>
#include <bitset>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int a,b,c;
    int costa, costb,costc;
    int money;
    cin >> a >> b >> c >> costa >> costb >> costc >> money;
    int q , w , e;
    int total;
    q=a*costa;
    w=b*costb;
    e=c*costc;
    total=q+w+e;
    if (total<=money){
        cout << "Yes" << endl;
    }
    else{
        cout<< "No" << endl;
    }
    return 0;
} 