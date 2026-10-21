#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(6);

    double a = M_PI / 5.0;
    double b = 9.0 * M_PI / 5.0;
    int k = 10;
    double dx = (b - a) / k;
    int n_fixed = 40;
    double eps = 0.0001;

    cout << "--------------------------------------------------------" << endl;
    cout << "|    X     |    SN    |    SE    |    Y     |  N (для SE)|" << endl;
    cout << "--------------------------------------------------------" << endl;

    for (double x = a; x <= b + dx / 2.0; x += dx) {
        
        double SN = 0.0;
        double SE = 0.0;
        int n_SE = 0;

        for (int n = 1; n <= n_fixed; n++) {
            SN += cos(n * x) / n;
        }

        double term = 0.0;
        int n = 1;
        do {
            term = cos(n * x) / n;
            SE += term;
            n_SE = n;
            n++;
        } while (fabs(term) >= eps);

        double Y = -log(fabs(2.0 * sin(x / 2.0)));

        cout << "| " << setw(7) << x 
             << " | " << setw(7) << SN 
             << " | " << setw(7) << SE 
             << " | " << setw(7) << Y 
             << " | " << setw(9) << n_SE << " |" << endl;
    }
    
    cout << "--------------------------------------------------------" << endl;

    return 0;
}
