#include <iostream>
using namespace std;
int main(){
    string s1 = "cat";
    string s2=s1;
    string s3=s1;
    cout << s1 << ' ' << s2 << ' ' << s3 << endl;
    s2[0]=s3[2]='t';
    cout << s1 << ' ' << s2 << ' ' << s3 << endl;
    string s4(10,'I');
    cout<<s4;
    return 0;
}