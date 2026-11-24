#include <iostream>
#include <windows.h>

using namespace std;

double add(double a, double b) {
    return a + b;
}

void add(double a, double b, double c, double d) {
    cout << (a + c) << " + " << (b + d) << "i" << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;

    double c, d, e, f;
    cin >> c >> d >> e >> f;
    add(c, d, e, f);

    return 0;
}
