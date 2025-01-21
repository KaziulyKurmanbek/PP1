#include <iostream>
#include <cmath>
using namespace std;
struct student{
    string name;
    float GPA;
    int height;
    string city;
};

int main(){
    student st1, st2;
    st1.name="Erasyl";
    st1.GPA=4.0;
    st1.city="Almaty";
    st1.height=175;
    st2.name="Dias";
    st2.GPA=4.0;
    st2.height=190;
    st2.city="Shym";
    cout<<st1.name<<endl;
    cout<<st1.GPA<<endl;
    cout<<st2.name<<endl;
    printf("%.2f\n", st2.GPA);
    return 0;
}