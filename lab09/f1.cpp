#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int days;
    cin>>days;
    map<string, int> docs;
    double sum=0.0;
    for(int i=0; i<days; i++){
        int num_doc;
        cin>>num_doc;
        for(int j=0; j<num_doc; j++){
            string city;
            int quant;
            cin>>city>>quant;
            sum+=quant;
            docs[city]+=quant;
        }
    }
    map<string, int> :: iterator it;
    for(it=docs.begin(); it!=docs.end(); it++){
        cout<<it->first<<" "<<it->second*100/sum<<endl;
    }
    return 0;
}