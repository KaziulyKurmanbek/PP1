#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n, m;

    cin >> n;

    int array[n];

    for ( int i = 0; i<n; i++){
        cin >> array[i];
    }

    cin >> m;

    int arr[m];

    for ( int j = 0; j<m; j++){
        cin >> arr[j];
    }

    int end[n+m];
    for (int i = 0; i < n; i++){
        end[i] = array[i];
    }
    for (int i = 0; i < m; i++){
        end[i+n] = arr[i];
    }
    sort(end, end+n+m);
    for ( int u = 0; u < m+n; u++){
        cout << end[u] << " ";
    }

    return 0;
}