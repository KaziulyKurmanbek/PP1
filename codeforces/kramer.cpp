#include <iostream>
#include <vector>
using namespace std;

double determinant( vector<double> a,  vector<double> b,  vector<double> c) {
    double ans1 = (a[0] * b[1] * c[2]) + (b[0] * c[1] * a[2]) + (c[0] * a[1] * b[2]);
    double ans2 = (c[0] * b[1] * a[2]) + (a[0] * b[2] * c[1]) + (a[1] * b[0] * c[2]);
    return ans1 - ans2;
}

int main() {
    vector<vector<double> > matrix;
    vector<double> ans;
    vector<double> v1;
    vector<double> v2;
    vector<double> v3;
    cout<<"1st column "<<endl;
    for(double i=0; i<3; i++){
        double q;
        cin>>q;
        v1.push_back(q);
    }
    cout<<"2nd column "<<endl;
    for(double i=0; i<3; i++){
        double q;
        cin>>q;
        v2.push_back(q);
    }
    cout<<"3rd column "<<endl;
    for(double i=0; i<3; i++){
        double q;
        cin>>q;
        v3.push_back(q);
    }
    cout<<"4th column "<<endl;
    for(double i=0; i<3; i++){
        double q;
        cin>>q;
        ans.push_back(q);
    }
    double del=determinant(v1,v2,v3); 
    cout<<"x1 = "<<determinant(ans, v2, v3)<<endl;
    cout<<"x2 = "<<determinant(v1, ans, v3)<<endl;
    cout<<"x3 = "<<determinant(v1, v2, ans)<<endl;

    
}