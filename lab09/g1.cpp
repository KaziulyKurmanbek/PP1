#include <iostream>
#include <cmath>
using namespace std;

double GP(double at1, double at2, double fin) {
    if (at1 + at2 < 30 || fin < 20) return 0.0;
    int total = at1 + at2 + fin;
    if (total < 50) return 0.0;
    if (total >= 95) return 4.0;
    return 1.0 + (total - 50) / 5 * (1.0 / 3);
}

int main() {
    int n;
    cin >> n;

    double sum_cred = 0;
    double sum_gp = 0;

    for (int i = 0; i < n; i++) {
        double at1, at2, fin, cred;
        cin >> at1 >> at2 >> fin >> cred;
        double gp = GP(at1, at2, fin);
        sum_cred += cred;
        sum_gp += gp * cred;
    }

    cout << (sum_gp / sum_cred) << endl;

    return 0;
}
