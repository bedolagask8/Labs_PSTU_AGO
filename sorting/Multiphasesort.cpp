#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> polyphase(vector<int> a) {
    int n = a.size();
    vector<int> b(n);

    for (int width = 1; width < n; width *= 2) {
        for (int i = 0; i < n; i += 2 * width) {
            int mid = min(i + width, n);
            int end = min(i + 2 * width, n);

            int l = i, r = mid, k = i;
            while (l < mid && r < end)
                b[k++] = (a[l] <= a[r]) ? a[l++] : a[r++];
            while (l < mid) b[k++] = a[l++];
            while (r < end) b[k++] = a[r++];
        }
        swap(a, b);
    }
    return a;
}

int main() {
    vector<int> data = {5, 1, 9, 3, 7, 2, 8, 4, 6, 0};
    for (int x : polyphase(data)) cout << x << " ";
}
