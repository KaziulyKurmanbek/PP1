#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char gender[2]{'male', 'famale'};
    char university[2]{'KBTU', 'SDU'};
    string str;
    int i,j;
    cout<<"1_male"<<" or "<<"2_famele";
    cin>>i;
    cout<<"1_KBTU"<<" or "<<"2_SDU";
    cin>>j;
    if(gender[i-1]=='male' && university[j-1]=='KBTU'){
        cout<<"Кафедра не істейміз?"<<endl<<" Write your answer>>";
        getline(cin, str);
        cout<<str;
    }

    return 0;
}