#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = 0;
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        x -= 1;
        y -= 1;
        if (x >= 0 && y >= 0 && x < n && y < m) arr[x][y] = 15;
        if (x - 1 >= 0 && y - 1 >= 0) arr[x - 1][y - 1] += 1;
        if (x - 1 >= 0) arr[x - 1][y] += 1;
        if (x - 1 >= 0 && y + 1 < m) arr[x - 1][y + 1] += 1;
        if (y - 1 >= 0) arr[x][y - 1] += 1;
        if (y + 1 < m) arr[x][y + 1] += 1;
        if (x + 1 < n && y - 1 >= 0) arr[x + 1][y - 1] += 1;
        if (x + 1 < n) arr[x + 1][y] += 1;
        if (x + 1 < n && y + 1 < m) arr[x + 1][y + 1] += 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                cout << ". ";
            } else if (arr[i][j] >= 15) {
                cout << "* ";
            } else {
                cout << arr[i][j] - 1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
