#include <iostream>
using namespace std;
int main(){

    long n, l, r;

    cin >> n >> l >> r;

    long array[n];

    long sum = 0;

    for (int i = 0; i <n; i++ ){
        cin >> array[i];
    }
    for (int j = 0; j < n; j++){
        if(j+1>=l && j+1<=r){
            sum+=array[j];
        }
    }
    cout << sum << endl;
    return 0;
}