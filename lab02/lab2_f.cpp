#include <iostream>
using namespace std;
int main() {
    int n;
    // cin>>t;
    // if(n%2==1){
    //     cout<<"Super"<<endl;
    // }
    // else{
    //     if(n>20){
    //     cout<<"Not Super"<<endl;
    //     }
    //     else{
    //         if(n>=6){
    //         cout<<"Super"<<endl;
    //         }
    //         else{
    //             if(n>=2)
    //             cout<<"Not Super"<<endl;
    //         }
    //     }

        // while(t>0){
            cin>>n;
        if (n%2==1 || ( n>=6 && n <= 20) ){
            cout<<"Super"<<endl;
        }else{
            cout<<"Not Super"<<endl;
        }
        // t--; 
        // }
    // }
    
return 0;
}

