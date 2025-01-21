#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    
    if(x < 0 || x >= 8 || y < 0 || y >= 8){
        cout << "Impossible" << endl;
        return 0;
    }

    int arr[8][8] = {0};

    for(int i = 0; i < 8; i++){
        arr[x][i] = 2;
        arr[i][y] = 2;
        
        if(x + i < 8 && y + i < 8) arr[x + i][y + i] = 2;
        if(x - i >= 0 && y - i >= 0) arr[x - i][y - i] = 2;
        if(x - i >= 0 && y + i < 8) arr[x - i][y + i] = 2;
        if(x + i < 8 && y - i >= 0) arr[x + i][y - i] = 2;
    }

    arr[x][y] = 1;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(arr[i][j] == 0){
                cout << "* ";
            } else {
                cout << arr[i][j] << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
