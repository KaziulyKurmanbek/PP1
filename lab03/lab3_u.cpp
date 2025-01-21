#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> elements(n);
    map<int, int> freq;
    
    for (int i = 0; i < n; i++) {
        cin >> elements[i];
        freq[elements[i]]++;
    }
    
    int max_freq = 0;
    for (auto &pair : freq) {
        if (pair.second > max_freq) {
            max_freq = pair.second;
        }
    }
    
    vector<int> modes;
    for (auto &pair : freq) {
        if (pair.second == max_freq) {
            modes.push_back(pair.first);
        }
    }
    
    sort(modes.begin(), modes.end(), greater<int>());
    
    for (int mode : modes) {
        cout << mode << " ";
    }
    
    return 0;
}
