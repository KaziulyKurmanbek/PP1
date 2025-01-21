#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int area(vector<vector<int> > v, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            sum+=v[i][j];
        }
    }
    return sum;
}
void fill_rook(int x, int y, int n, vector<vector<int> > &v){
    for(int i=0;i<n;i++){
        v[x][i]=0;
        v[i][y]=0;
    }
}
int main(){
    int n,m,k;
    cin>>n>>m;
    vector<vector<int> > v(n, vector<int>(n,1));
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        fill_rook(x-1,y-1,n,v);
        cout<<area(v,n)<<" ";
    }
}