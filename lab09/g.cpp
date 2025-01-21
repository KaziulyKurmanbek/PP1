#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double GP(double at1, double at2, double fin, double cred){
    if (at1+at2+fin < 50) return 0.0;
    if (at1+at2+fin >= 95) return 4.0;
    if(at1+at2>=30 && fin>=20){
        return 1.0 + ( at1+at2+fin - 50) / 5 * (1.0 / 3);
    }
}
int main(){
    int n;
    cin>>n;
    double sum_cred=0;
    double sum_gp=0;
    for(int i=0; i<n; i++){
        double at1, at2, fin, cred;
        cin >> at1 >> at2 >> fin >> cred;
        sum_cred+=cred;
        sum_gp+=GP(at1, at2, fin, cred)*cred;
    }
    cout<<sum_gp/sum_cred;
}