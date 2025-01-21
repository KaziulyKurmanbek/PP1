#include <iostream>
#include <string>
#include <cstdlib>  
#include <cmath>    

using namespace std;

int main() {
    string s;
    cin >> s;

    string result;
    string result1;
    int j;

    for (int i = 0; i < s.size(); i += 3) {
        string ss = s.substr(i, 3);

        if (ss == "ONE") {
            result += '1';
        } else if (ss == "TWO") {
            result += '2';
        } else if (ss == "THR") {
            result += '3';
        } else if (ss == "FOU") {
            result += '4';
        } else if (ss == "FIV") {
            result += '5';
        } else if (ss == "SIX") {
            result += '6';
        } else if (ss == "SEV") {
            result += '7';
        } else if (ss == "EIG") {
            result += '8';
        } else if (ss == "NIN") {
            result += '9';
        } else if (ss == "ZER") {
            result += '0';
        } else if (ss == "+") {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < s.size(); i += 3) {
        string ss = s.substr(i, 3);

        if (ss == "ONE") {
            result1 += '1';
        } else if (ss == "TWO") {
            result1 += '2';
        } else if (ss == "THR") {
            result1 += '3';
        } else if (ss == "FOU") {
            result1 += '4';
        } else if (ss == "FIV") {
            result1 += '5';
        } else if (ss == "SIX") {
            result1 += '6';
        } else if (ss == "SEV") {
            result1 += '7';
        } else if (ss == "EIG") {
            result1 += '8';
        } else if (ss == "NIN") {
            result1 += '9';
        } else if (ss == "ZER") {
            result1 += '0';
        }
    }

    int a = atoi(result.c_str());
    int b = atoi(result1.c_str());
    int c = a + b;

    string resultString;
    while (c > 0) {
        int digit = c % 10;
        switch (digit) {
            case 0: resultString = "ZER" + resultString; break;
            case 1: resultString = "ONE" + resultString; break;
            case 2: resultString = "TWO" + resultString; break;
            case 3: resultString = "THR" + resultString; break;
            case 4: resultString = "FOU" + resultString; break;
            case 5: resultString = "FIV" + resultString; break;
            case 6: resultString = "SIX" + resultString; break;
            case 7: resultString = "SEV" + resultString; break;
            case 8: resultString = "EIG" + resultString; break;
            case 9: resultString = "NIN" + resultString; break;
        }
        c /= 10;
    }

    cout << resultString << endl;

    return 0;
}
