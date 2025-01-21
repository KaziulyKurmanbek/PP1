#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int sum =0;
    int number;
    while ( cin >> number){
        sum +=number;
    }
    cout << sum;
    return 0;
}