#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int countFillableCells(int n, int x, int y, vector<string>& matrix) {
    x -= 1;
    y -= 1;

    if (matrix[y][x] == '*') {
        return 0;
    }

    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    stack<pair<int, int>> s;
    s.push(make_pair(y, x));
    int count = 0;

    while (!s.empty()) {
        pair<int, int> current = s.top();
        s.pop();

        int cy = current.first;
        int cx = current.second;

        if (visited[cy][cx]) {
            continue;
        }

        visited[cy][cx] = true;
        count++;

        for (int i = 0; i < directions.size(); i++) {
            int ny = cy + directions[i].first;
            int nx = cx + directions[i].second;

            if (ny >= 0 && ny < n && nx >= 0 && nx < n && !visited[ny][nx] && matrix[ny][nx] == '.') {
                s.push(make_pair(ny, nx));
            }
        }
    }

    return count;
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<string> matrix(n);
    for (int i = 0; i < n; i++) {
        cin >> matrix[i];
    }

    cout << countFillableCells(n, x, y, matrix) << endl;
    return 0;
}
