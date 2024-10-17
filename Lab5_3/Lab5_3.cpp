#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double j(const double x);

int main()
{
    double kp, kk, z, k, dk;
    int n;

    cout << "k poch: "; cin >> kp;
    cout << "k kinz: "; cin >> kk;
    cout << "n : "; cin >> n;

    dk = (kk - kp) / n;
    k = kp;

    cout << "+" << setw(12) << setfill('-') << "+" << setw(17) << "+" << endl;
    cout << "|" << setw(10) << setfill(' ') << "k" << " |" << setw(15) << "z" << " |" << endl;
    cout << "+" << setw(12) << setfill('-') << "+" << setw(17) << "+" << endl;

    while (k <= kk)
    {
        z = j(1 + k + j(k) + pow(j(1 + k * k), 2));
        cout << "|" << setw(10) << setfill(' ') << k << " |" << setw(15) << z << " |" << endl;
        k += dk;
    }

    cout << "+" << setw(12) << setfill('-') << "+" << setw(17) << "+" << endl;

    return 0;
}

double j(const double x)
{
    if (abs(x) >= 1) {
        return ((cos(x) + exp(-abs(x))) / (pow(cos(x), 2) + 1));
    }
    else {
        double sum = 0, a = x;
        sum = a;

        for (int i = 1; i <= 5; i++) {
            a *= (x * x) / ((2 * i) * (2 * i + 1));
            sum += a;
        }
        return sum;
    }
}
