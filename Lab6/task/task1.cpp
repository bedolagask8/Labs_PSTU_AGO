#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

const int N = 256;

int findLongest(char s[], int &maxLen) {
    int len = strlen(s);
    int i = 0;
    int start = 0;
    maxLen = 0;
    while (i < len) {
        while (i < len && s[i] == ' ') i++;
        int begin = i;
        while (i < len && s[i] != ' ') i++;
        int currentLen = i - begin;
        if (currentLen > maxLen) {
            maxLen = currentLen;
            start = begin;
        }
    }
    return start;
}

int findShortest(char s[], int &minLen) {
    int len = strlen(s);
    int i = 0;
    int start = 0;
    minLen = N;
    while (i < len) {
        while (i < len && s[i] == ' ') i++;
        int begin = i;
        while (i < len && s[i] != ' ') i++;
        int currentLen = i - begin;
        if (currentLen > 0 && currentLen < minLen) {
            minLen = currentLen;
            start = begin;
        }
    }
    return start;
}

void printWord(char s[], int start, int len) {
    for (int i = start; i < start + len; i++) {
        cout << s[i];
    }
    cout << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char s[N];
    cout << "Введите строку: ";
    cin.getline(s, N);

    int maxLen, minLen;
    int startMax = findLongest(s, maxLen);
    int startMin = findShortest(s, minLen);

    cout << "\nСамое длинное слово: ";
    printWord(s, startMax, maxLen);

    cout << "Самое короткое слово: ";
    printWord(s, startMin, minLen);

    return 0;
}
