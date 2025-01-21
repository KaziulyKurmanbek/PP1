#include <iostream>
#include <vector>
using namespace std;

bool isCoolMatrix(vector<vector<int>>& matrix, int n, int m) {
    for (int i = 0; i < n - 1; ++i) {       
        for (int j = 0; j < m - 1; ++j) {   
            int sum = matrix[i][j] + matrix[i][j + 1] + matrix[i + 1][j] + matrix[i + 1][j + 1];
            if (sum == 0 || sum == 4) {     
                return false;               
            }
        }
    }
    return true; 
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    if (isCoolMatrix(matrix, n, m)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
