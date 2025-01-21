#include <iostream>
#include <string>
#include <map>  

using namespace std;

int main() {
    map<string, int> wordToNum = {
        {"ONE", 1}, {"TWO", 2}, {"THR", 3}, {"FOU", 4}, {"FIV", 5},
        {"SIX", 6}, {"SEV", 7}, {"EIG", 8}, {"NIN", 9}, {"ZER", 0}
    };

   
    map<int, string> numToWord = {
        {1, "ONE"}, {2, "TWO"}, {3, "THR"}, {4, "FOU"}, {5, "FIV"},
        {6, "SIX"}, {7, "SEV"}, {8, "EIG"}, {9, "NIN"}, {0, "ZER"}
    };

    string s;
    cin >> s;

    size_t plusPos = s.find('+');
    string firstPart = s.substr(0, plusPos);
    string secondPart = s.substr(plusPos + 1);


    auto convertToNumber = [&](const string& part) -> int {
        int num = 0;
        for (size_t i = 0; i < part.size(); i += 3) {
            string triplet = part.substr(i, 3);
            num = num * 10 + wordToNum[triplet];
        }
        return num;
    };

    int num1 = convertToNumber(firstPart);
    int num2 = convertToNumber(secondPart);

    int sum = num1 + num2;

    string result;
    do {
        int digit = sum % 10;
        result = numToWord[digit] + result;  
        sum /= 10;
    } while (sum > 0);

    cout << result << endl;

    return 0;
}
