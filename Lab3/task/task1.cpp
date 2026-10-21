#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double pi = 3.141592653589793;
    double a = pi / 5.0;
    double b = 9.0 * pi / 5.0;
    int k = 10;
    double h = (b - a) / k;
    int n = 40;
    double eps = 0.0001;
    cout << "---------------------------------------------------------\n";
    cout << "      X\t\t  SN (n=40)\t  SE (eps)\t  Y (точная)\n";
    cout << "---------------------------------------------------------\n";

    for (double x = a; x <= b; x += h) {
        
        double sn = 0.0;
        for (int i = 1; i <= n; i++) {
            sn += cos(i * x) / i;
        }

        double se = 0.0;
        double term;
        int i = 1;
        do {
            term = cos(i * x) / i;
            se += term;
            i++;
        } while (fabs(term) >= eps);

        double y = -log(fabs(2.0 * sin(x / 2.0)));

        cout << x << "\t" << sn << "\t" << se << "\t" << y << "\n";
    }

    cout << "---------------------------------------------------------\n";

    return 0;
}
