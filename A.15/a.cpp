#include <iostream>
using namespace std;
int main(){
    int secunds;
    cin>>secunds;
    int hours=secunds/3600;
    int minuts= (secunds-(hours*3600))/60;
    int sec= secunds-(3600*hours)-(60*minuts);
    cout<<hours<<":";
    printf("%.2i", minuts);
    cout<<":";
    printf("%.2i", sec);
    cout<<endl;
}