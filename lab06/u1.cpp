#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void fill_nods(int arr[], int n, int nods[], int& m) {
    int q = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            nods[q] = gcd(arr[i], arr[j]);
            q++;
        }
    }
    m = q;  
}

int find_max(int nods[], int m) {
    int max = nods[0];
    for (int i = 1; i < m; i++) {  
        if (nods[i] > max) {
            max = nods[i];
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    input(arr, n);

    int m = n * (n - 1) / 2;  
    int nods[m];
    fill_nods(arr, n, nods, m);

    cout << find_max(nods, m);
    return 0;
}
