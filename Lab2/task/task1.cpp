#include <iostream>
#include <clocale>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int sum = 0;
    int count = 0;

    cout << "=== Лабораторная работа №2. Вариант 2 ===" << endl;
    cout << "Поиск суммы целых положительных четных чисел, меньших 100." << endl << endl;

    for (int i = 2; i < 100; i += 2) {
        sum += i;
        count++;
    }

    cout << "Количество сложенных чисел: " << count << endl;
    cout << "Сумма чисел от 2 до 98: " << sum << endl;

    int check_sum = (2 + 98) * 49 / 2;
    cout << "Проверка (по формуле): " << check_sum << endl;

    return 0;
}
