#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;  
    system("cls");
    cout << "Masukkan sebuah angka: ";
    cin >> n;
    if (n <= 1) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        bool isPrima = true;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                isPrima = false;
                break;
            }
        }

        if (isPrima) {
            cout << n << " merupakan bilangan prima.";
        } else {
            cout << n << " bukanlah bilangan prima.";
        }
    }
    return 0;
}