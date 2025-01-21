#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> timeline(1440, 0); 

    for (int i = 0; i < n; i++) {
        int start_h, start_m, end_h, end_m;
        cin >> start_h >> start_m >> end_h >> end_m;

        int start = start_h * 60 + start_m; 
        int end = end_h * 60 + end_m;       

        if (start < end) {
            for (int j = start; j < end; j++) {
                timeline[j]++;
            }
        } else {
            for (int j = start; j < 1440; j++) {
                timeline[j]++;
            }
            for (int j = 0; j < end; j++) {
                timeline[j]++;
            }
        }
    }

    int overlap_minutes = 0;
    for (int i = 0; i < 1440; i++) {
        if (timeline[i] == n) {
            overlap_minutes++;
        }
    }

    cout << overlap_minutes << endl;
    return 0;
}
