#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int n = 5;
    int m = 3;
    
    cout << "Начальные значения: n = " << n << ", m = " << m << endl;
    
    int res1 = ++n * ++m; 
    cout << "1) ++n * ++m = " << res1 << endl;
    cout << "   После операции: n = " << n << ", m = " << m << endl;
    
    n = 5; 
    m = 3; 
    
    bool res2 = (m++ < n);
    cout << "2) m++ < n = " << res2 << " (1 - истина)" << endl;
    cout << "   После операции: m = " << m << " (увеличилось на 1)" << endl;
    
    n = 5; 
    m = 3;
    
    bool res3 = (n++ > m);
    cout << "3) n++ > m = " << res3 << " (1 - истина)" << endl;
    cout << "   После операции: n = " << n << " (увеличилось на 1)" << endl;

    return 0;
}
