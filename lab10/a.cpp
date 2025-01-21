#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
struct coors
{
    pair<int, int> x_y;
    double distance;
};
bool cmp(coors&a, coors&b){
    return a.distance<b.distance;
}
void out(coors&a){
    cout<<a.x_y.first<<" "<<a.x_y.second<<endl;
}
int main(){
    vector<coors>v;
    int x,y,n;
    cin>>x>>y>>n;
    for(int i=0; i<n; i++){
        int x2, y2;
        cin>>x2>>y2;
        double distance=sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
        coors point;
        point.distance=distance;
        point.x_y=make_pair(x2,y2);
        v.push_back(point);
    }
    sort(v.begin(), v.end(), cmp);
    for_each(v.begin(), v.end(), out);
    return 0;
}