#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> names;
    vector<int>scores;
    for(int i=0; i<n; i++){
        int score;
        string name;
        cin>>name>>score;
        names.push_back(name);
        scores.push_back(score);
    }
    sort(names.begin(), names.end());
    sort(scores.begin(), scores.end());
    for(int i=0; i<names.size(); i++){
        cout<<names[i]<<" "<<scores[i]<<endl;
    }
}