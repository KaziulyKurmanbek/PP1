#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int k;
    cin>>k;
    srand(k);
    cout<<rand()<<endl;
    return 0;
}