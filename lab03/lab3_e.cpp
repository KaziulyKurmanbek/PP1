#include <iostream>
#include <iomanip> 
using namespace std;
int main (){
    
    string array[26] = {"A a", "B b", "C c", "D d", "E e", "F f", "G g", "H h", "I i", "J j", "K k", "L l", "M m", "N n", "O o", "P p", "Q q", "R r", "S s", "T t", "U u", "V v", "W w", "X x", "Y y", "Z z"};
    
    int n;

    cin >> n;

    if (n<27) {

    cout << array[n-1] << endl;

    }
    else {
        cout << "No such letter!" << endl;
    }
    return 0;
}