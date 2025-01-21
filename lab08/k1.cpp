#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> maxs;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        int sum = 1; // Count the element itself
        int j = i + 1; 
        // Count elements to the right that are less than v[i]
        while (j < n && v[i] > v[j]) {
            sum++;
            j++;
        }
        
        int k = i - 1;
        // Count elements to the left that are less than v[i]
        while (k >= 0 && v[i] > v[k]) {
            sum++;
            k--;
        }

        // Calculate the "area" and store it in maxs
        maxs.push_back(sum * v[i]);
    }

    // Find the maximum value in maxs
    int max = maxs[0];
    for (int i = 1; i < maxs.size(); i++) {
        if (maxs[i] > max) {
            max = maxs[i];
        }
    }

    cout << max << endl;
    return 0;
}
