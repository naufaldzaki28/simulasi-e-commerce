#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Prosedur untuk menampilkan KPK
void tampilkanKPK(int a, int b) {
    int hasilKPK = (a * b) / gcd(a, b);
    cout << "KPK dari " << a << " dan " << b << " adalah " << hasilKPK << endl;
}

int main() {
    int a, b;
    cout << "Masukkan dua bilangan bulat: ";
    cin >> a >> b;
    
    tampilkanKPK(a, b);

    return 0;
}
#include <iostream>
using namespace std;
//contoh 10.6
void JamBerikutnya(int &j, int &m, int &d) {
    int totalDetik = j * 3600 + m * 60 + d + 1;
    j = totalDetik / 3600;
    m = (totalDetik % 3600) / 60;
    d = totalDetik % 60;
}

int main() {
    int j, m, d;
    cout << "Masukkan jam (0-23): "; cin >> j;
    cout << "Masukkan menit (0-59): "; cin >> m;
    cout << "Masukkan detik (0-59): "; cin >> d;
    JamBerikutnya(j, m, d);
    cout << "Waktu setelah 1 detik: ";
    printf("%02d:%02d:%02d\n", j, m, d);
    
    return 0;
}
#include <iostream>
#include <iomanip> 
using namespace std;
// contoh 10.6
void JamBerikutnya(int &j, int &m, int &d) {
    int totalDetik = j * 3600 + m * 60 + d + 1;
    j = totalDetik / 3600;
    m = (totalDetik % 3600) / 60;
    d = totalDetik % 60;
}

int main() {
    int j, m, d;
    cout << "Masukkan jam (0-23): "; cin >> j;
    cout << "Masukkan menit (0-59): "; cin >> m;
    cout << "Masukkan detik (0-59): "; cin >> d;
    JamBerikutnya(j, m, d);
    cout << "Waktu setelah 1 detik: "
         << setfill('0') << setw(2) << j << ":"
         << setfill('0') << setw(2) << m << ":"
         << setfill('0') << setw(2) << d << endl;

    return 0;
}
