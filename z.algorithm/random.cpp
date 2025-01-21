#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;

int rng(){//rand num between 0 and 1000
    return rand()%1000;
}

int main(){
    
    srand(time(0));
    int n;
    cin>>n;
    while(n>0){
        cout<<rng()<< ' ';
        --n;
    }
    cout<<endl;

    return 0;
}