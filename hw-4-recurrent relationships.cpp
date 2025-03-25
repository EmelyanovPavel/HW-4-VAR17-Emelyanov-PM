#include <iostream> 

using namespace std;

int main() 
{
    int n;
    cout << "Введите количество элементов (n): ";
    cin >> n;

    double b1 = 100;
    double b2 = b1 / 10;
    double b3 = b2 + 10;

    cout << "Первые " << n << " элементов последовательности B:\n";
    cout << "B1: " << b1 << endl;
    cout << "B2: " << b2 << endl;

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 1) {
            b3 = b2 / 10;
        }
        else {
            b3 = b2 + 10;
        }
        cout << "B" << i << ": " << b3 << endl;
        b2 = b3;
    }

    return 0;
}