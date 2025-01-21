#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> findDivisors(int num) {
    vector<int> divisors;
    for (int i = 1; i * i <= num; ++i) {
        if (num % i == 0) {
            divisors.push_back(i); 
            if (i != num / i) {
                divisors.push_back(num / i); 
            }
        }
    }
    return divisors;
}

int main() {
    int A, B, K;
    cin >> A >> B >> K;\
    int gcdValue = gcd(A, B);\
    vector<int> divisors = findDivisors(gcdValue);\
    sort(divisors.rbegin(), divisors.rend());\
    cout << divisors[K - 1] << endl;
    return 0;
}
