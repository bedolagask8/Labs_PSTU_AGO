#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 50;

void fill(int a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] = rand() % 21 - 10;
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int countPositive(int a[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            k++;
    return k;
}

void delNegative(int a[], int n)
{
    int pos = 0;
    for (int i = 0; i < n; i++)
        if (a[i] >= 0)
        {
            a[pos] = a[i];
            pos++;
        }
    for (int i = pos; i < n; i++)
        a[i] = 0;
}

int main()
{
    srand(time(0));

    int n;
    cin >> n;

    if (n <= 0 || n > N)
        return 1;

    int a[N];

    fill(a, n);
    print(a, n);

    int k = countPositive(a, n);
    cout << k << endl;

    delNegative(a, n);
    print(a, n);

    return 0;
}
