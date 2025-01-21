#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0 && a<32 && b<13){
    if( (c%100!=0 && c%4==0) || c%400==0 ){
         if(b%2==0 && a<=30){
            cout<<"1yes"<<endl;
        }else{
        if(b/2==1 && a<=29){
            cout<<"2yes"<<endl;
        }else{
        if(b/2==0 && a<=30){
            cout<<"3yes"<<endl;
        }}}
    }
    else{
        if(b%2==1 && a<=31){
            cout<<"4yes"<<endl;
        }else{
        if(b/2==1 && a<=28){
            cout<<"5yes"<<endl;
        }
        else{if(b%2==0 && a<=30 && b!=2){
            cout<<"6yes"<<endl;
        }
        else{cout<<"7no"<<endl;}
    }}}}
    else{
        cout<<"no"<<endl;
    }
    return 0;
}