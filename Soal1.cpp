#include <iostream>
using namespace std;
int main() {
    int totalDetik, jam, menit, detik;
    cout << "Masukkan waktu dalam detik: ";
    cin >> totalDetik;
    if (totalDetik < 0) {
        cout << "Input tidak dapat berupa angka negatif.\n";
        return 1;
    }
    jam = totalDetik / 3600;
    totalDetik %= 3600;
    menit = totalDetik / 60;
    detik = totalDetik % 60;
    cout << "Waktu: "<< (jam < 10 ? "0" : "") << jam << ":"<< (menit < 10 ? "0" : "") << menit << ":"
    << (detik < 10 ? "0" : "") << detik << std::endl;
    return 0;
}
