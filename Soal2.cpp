#include <iostream>
using namespace std;
#include <string>
int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    for (char& karakter : kalimat) {
        if (karakter >= 'a' && karakter <= 'z') {
            karakter += ('A' - 'a');
        }
    }
    cout << "Kalimat dalam huruf besar: " << kalimat << endl;
    return 0;
}
