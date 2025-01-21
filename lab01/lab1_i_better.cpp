#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int t;
    std::cin>>t;
    double s=std::sqrt(t);
    std::cout<<std::fixed<<std::setprecision(10)<<std::endl;
    std::cout<<s<<std::endl;
    return 0;
}