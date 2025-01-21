#include <iostream>
#include <vector>
using namespace std;

bool find_num(vector<int>& v, int num, int ind) {
    if (ind < 0) return false; 
    if (v[ind] == num) return true; 
    return find_num(v, num, ind - 1); 
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int num;
    cin >> num; 
    if (find_num(v, num, v.size() - 1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
