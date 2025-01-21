#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<string, double> m1;
    map<string, double> m;
    map<string, double>::iterator it;
    map<string, double>::iterator its;
    for(int i=0; i<n; i++){
        string name;
        double score;
        cin>>name>>score;
        ++m1[name];
        m[name]+=score;
    }
    for(it=m.begin(); it!=m.end(); it++){
        for(its=m1.begin(); its!=m1.end(); its++){
            if(it->first==its->first){
                cout<<its->first<<": ";
                printf("%.3f", it->second/its->second);
                cout<<endl;
            }
        }
    }
}
