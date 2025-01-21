#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int arr[n][m];
    
    int q;
    cin >> q;
    
    for (int k = 0; k < q; ++k) {
        int x, y;
        cin >> x >> y;
        
        // Проверяем, чтобы координаты не выходили за пределы
        if (x >= 0 && x < n && y >= 0 && y < m) {
            if (y + 1 < m) arr[x][y + 1] += 1;
            if (y - 1 >= 0) arr[x][y - 1] += 1;
            if (x - 1 >= 0 && y - 1 >= 0) arr[x - 1][y - 1] += 1;
            if (x - 1 >= 0) arr[x - 1][y] += 1;
            if (x - 1 >= 0 && y + 1 < m) arr[x - 1][y + 1] += 1;
            if (x + 1 < n && y - 1 >= 0) arr[x + 1][y - 1] += 1;
            if (x + 1 < n && y + 1 < m) arr[x + 1][y + 1] += 1;
            if (x + 1 < n) arr[x + 1][y] += 1;
            
            arr[x][y] = 9;
        }
    }
    
    // Выводим массив
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] >= 15) {
                cout << "* ";
            } else if (arr[i][j] == 0) {
                cout << ". ";
            } else {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}