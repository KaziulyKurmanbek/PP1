#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    int j = 0;
    int k = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            j++;
        }
    }

    int arr[j + 2]; 
    arr[0] = -1;    
    k = 1;          

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            arr[k] = i;
            k++;
        }
    }

    arr[k] = str.size();

    for (int i = 0; i < k; i++) {
        bool bol = true;

        for (int l = arr[i] + 1; l < arr[i + 1]; l++) {
            if (str[l] >= '0' && str[l] <= '9') { 
                bol = false;
                break;
            }
        }

        if (bol == true) {
            for (int l = arr[i] + 1; l < arr[i + 1]; l++) {
                cout << str[l];
            }
            cout << endl;  
        }
    }

    return 0;
}
