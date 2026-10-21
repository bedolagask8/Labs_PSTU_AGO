#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_SIZE = 100;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int M[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        M[i] = rand() % 21 - 10;
    }

    cout << "\nИсходный массив: ";
    printArray(M, n);

    int zeroIdx = -1;
    for (int i = 0; i < n; i++) {
        if (M[i] == 0) {
            zeroIdx = i;
            break;
        }
    }

    if (zeroIdx != -1) {
        for (int i = zeroIdx; i < n - 1; i++) {
            M[i] = M[i + 1];
        }
        n--;
        cout << "Первый ноль удален.\n";
    } else {
        cout << "Нулей нет.\n";
    }

    for (int i = n - 1; i > 0; i--) {
        if (M[i] % 2 == 0) {
            int newValue = M[i - 1] + 2;

            for (int j = n; j > i + 1; j--) {
                M[j] = M[j - 1];
            }
            M[i + 1] = newValue;
            n++;
        }
    }

    cout << "\nИтоговый массив: ";
    printArray(M, n);

    return 0;
}
