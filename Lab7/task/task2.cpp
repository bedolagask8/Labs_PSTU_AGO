#include <iostream>
#include <windows.h>

using namespace std;

double mult(int k, ...) {
    double *p = &k;
    p++;
    double res = 1.0;
    for (int i = 0; i < k; i++) {
        res *= *p;
        p++;
    }
    return res;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << mult(3, 2.0, 3.0, 4.0) << endl;

    cout << mult(7, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0) << endl;

    cout << mult(11, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0) << endl;

    return 0;
}
