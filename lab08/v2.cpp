#include <iostream>
#include <queue>
#include <string>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        map<int,int>m; 
        map<int,int>::iterator it;
        int deck;
        cin>>deck;
        queue<int> q;
        for(int j=1; j<=deck; j++){
            q.push(j);
        }
        for(int w=1; w<=deck ;w++){
            for(int k=0; k<w; k++){
                q.push(q.front());
                q.pop();
            }
            m[q.front()]=w;
            q.pop();
        }
        for(it=m.begin(); it!=m.end(); it++){
            cout<<it->second<<" ";
        }
        cout<<endl;
    }
}