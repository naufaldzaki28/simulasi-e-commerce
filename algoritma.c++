#include <iostream>
using namespace std;
int main () { //contoh 8.1
    int n;
    cout << "Masukkan nilai yang anda inginkan : "; cin >> n;
    for (int i = 1; i <= n;  i++) {
    cout << "Hello world" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.2
    int n;
    cout << "Masukkan berapa angka yang anda mau : "; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.3
    int n, sum = 0;
    cout << "Masukkan berapa angka deret yang anda mau jumlahkan : "; cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Jumlah deret dari 1 sampai " << n << " = " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std
int main() {//contoh8.4
    int n, x;
    double rata, sum = 0;
    cout << "Masukkan berapa nilai yang ingin anda ratakan : "; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Masukkan bilangan ke- " << i << ": ";
        cin >> x;
        sum += x;
    }
   rata = (sum) / n;
    cout << "Maka rata ratanya adalah = " << rata << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.5
    int n; 
    cout << "Masukkan hitungan mundur roketnya : "; cin >> n;
    for (int i = n; i >= 0; i--) {
        cout << i << endl;
    for (int p = 1; p <= 1000000; p++) {
        }
    }
    cout << "go" << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.6
    int nomor_menu;
    do { 
    cout << "==Menu==" << endl;
    cout << "1. Baca data" << endl;
    cout << "2. Cetak data" << endl;
    cout << "3. Ubah data" << endl;
    cout << "4. Hapus data" << endl;
    cout << "5. Keluar program" << endl;
    cout << "Masukkanlah pilihan anda (1/2/3/4/5) : "; cin >> nomor_menu;
    switch (nomor_menu)
    {
    case 1: cout << "Anda memilih baca data" << endl;
    break;
    case 2: cout << "Anda memilih cetak data" << endl;
    break;
    case 3: cout << "Anda memilih ubah data" << endl;
    break;
    case 4: cout << "Anda memilih hapus data" << endl;
    break;
    case 5: cout << "Anda memilih keluar program" << endl;
    break;
    default: cout << "Anda memilih yang tidak ada di program!" << endl;
        break;
    }
}
    while (nomor_menu != 5);
    cout << "Terima kasih telah masuk..." << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.7
    const int jam_normal = 48;
    const int upah_lembur = 3000;
    string nama;
    char gol, jawab;
    int jumlah_jam_kerja, upah_per_jam;
    double lembur, upah_total;
    do { 
    cout << "Nama anda : "; cin >> nama;
    cout << "Golongan (A/B/C/D) : "; cin >> gol;
    cout << "Jumlah jam kerja (jam) : "; cin >> jumlah_jam_kerja;
    switch (gol)
    {
    case 'A': upah_per_jam = 4000;
    break;
    case 'B': upah_per_jam = 5000;
    break;
    case 'C': upah_per_jam = 6000;
    break;
    case 'D': upah_per_jam = 7500;
    break;
    default: cout << "Golongan tidak ada!" << endl;
        continue;
    }
    if (jumlah_jam_kerja <= jam_normal) {
        upah_total = jumlah_jam_kerja * upah_per_jam;
    } else {
        lembur = jumlah_jam_kerja - jam_normal;
        upah_total = jam_normal * upah_per_jam + lembur * upah_lembur;
    }    
    cout << "Upah anda adalah : " << upah_total << endl;
    cout << "Ulangi untuk karyawan yang lain? (y/t) : "; cin >> jawab;
}
    while (jawab != 't');
    cout << "Terima kasih telah mengisi.." << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.8
    int n, i;
    cout << "Masukkan jumlah anak ayam: "; cin >> n;
    cout << "Anak ayam turun" << n << endl;
    for (i = n; i >= 2; i--){
        cout << "Anak ayam turun " << i << " , mati satu tinggal " << (i-1) << endl;
    }
    cout << "Anak ayam turun 1, mati satu tinggal induknya" << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.9
    char cc;
    int ncc = 0;
    cout << "Masukkan karakter (diakhiri '.') : "; cin >> noskipws;
    while (cin >> cc && cc != '.') {
        ncc ++;
    }
    cout << "Jumlah karakter yang dibaca : " << ncc << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.10
    char c;
    int Nangka = 0, Nspasi = 0, Nlainnya = 0;
    cout << "Masukkan karakter (akhiri dengan '.'): " ;cin >> noskipws;
    while (cin >> c && c != '.') {
        switch (c) {
            case '0': case '1': case '2': case '3': case '4': 
            case '5': case '6': case '7': case '8': case '9':
                Nangka++;
                break;
            case ' ':
                Nspasi++;
                break;
            default:
                Nlainnya++;
                break;
        }
    }
    cout << "Jumlah angka: " << Nangka << endl;
    cout << "Jumlah spasi: " << Nspasi << endl;
    cout << "Jumlah karakter lainnya: " << Nlainnya << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.11
    int n;
    cout << "Masukkan jumlah data : "; cin >> n;
    if (n <= 0) {
        cout << "Jumlah data harus lebih dari nol." << endl;
    return 1;
    }
    int x, min;
    cout << "Masukkan data ke-1 : "; cin >> x;
    min = x;
    for (int i = 2; i <= n; i++){
    cout << "Masukkan data ke-" << i << " : "; cin >> x;
    if (x < min) {
        min = x;
    }
}
    cout << "Nilai terkecil adalah : " << min << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int nilai, min;
    bool pertama = true;
    cout << "Masukkan bilangan bulat (akhiri dengan -1):" << endl;
    while (true) {
        cin >> nilai;
        if (nilai == -1) {
            break;
        }
        if (pertama) {
            min = nilai;
            pertama = false;
        } else if (nilai < min) {
            min = nilai;
        }
    }
    if (pertama) {
        cout << "Tidak ada data yang dimasukkan." << endl;
    } else {
        cout << "Nilai terkecil adalah: " << min << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.13
    int x, nx = 0;
    cout << "Masukkan bilangan bulat (0 untuk berhenti):\n";
    cin >> x;
    while (x != 0) {
        if (x % 2 == 0) {
            nx++;
        }
        cin >> x;
    }
    cout << "Jumlah bilangan genap yang anda masukkan ialah: " << nx << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.14
    int N, k = 1, tanda = 1;
    double jumlah = 0;
    cout << "Masukkan jumlah deret (N): "; cin >> N;
    for (int i = 1; i <= N; i++) {
        jumlah += tanda * (1.0 / k);
        tanda *= -1;
        k += 2;
    }
    cout << "Jumlah deret = " << jumlah << endl;
    return 0;
}
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main() {//contoh 8.15
    int a, n, i = 1;
    int p = 1;
    cout << "Masukkan a (bilangan untuk dipangkatkan): "; cin >> a;
    cout << "Masukkan n (bilangan pangkat): "; cin >> n;

    while (i <= n) {
        p = p * a;
        i++;
    }
    cout << "Hasil perpangkatan: " << p << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main() {//contoh 8.16
    int a, n, i = 1;
    float p = 1;
    cout << "Masukkan a (bilangan untuk dipangkatkan): "; cin >> a;
    cout << "Masukkan n (bilangan pangkat(+/-)): "; cin >> n;
    if (n >= 0) {
        for (int i = 1; i <= n; i++) {
            p *= a;
        }
    } else {
        for (int i = 1; i <= -n; i++) {
            p *= a;
        }
        p = 1 / p;
    }

    cout << "Hasil perpangkatan: " << p << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.17
    int n, fak = 1;
    cout << "Masukkan nilai n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fak *= i;
    }
    cout << "Faktorial dari " << n << " adalah " << fak << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.18
    int m, n;
    cout << "Masukkan jumlah siswa: "; cin >> m;
    cout << "Masukkan jumlah mata pelajaran: "; cin >> n;
    for (int i = 0; i < m; i++) {
        string nama;
        cout << "\nNama siswa: "; cin >> nama;
        float jumlah = 0;
        for (int j = 0; j < n; j++) {
            float nilai;
            cout << "Nilai Mata Pelajaran " << j + 1 << ": "; cin >> nilai;
            jumlah += nilai;
        }
        float rata2 = jumlah / n;
        cout << "Rata-rata nilai " << nama << ": " << rata2 << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main() {//contoh 8.19
    string password = "abc123";
    string masukan;
    int count = 0;
    bool sah = false;
    while (!sah && count < 3) {
        cout << "Masukkan password: "; cin >> masukan;
        if (masukan == password) {
            sah = true;
        } else {
            count++;
        }
    }
    if (sah)
        cout << "Login berhasil!" << endl;
    else
        cout << "Gagal login. Coba lagi nanti." << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main() {
    int x, sisa;
    string biner = "";
    cout << "Masukkan bilangan desimal (x): "; cin >> x;
    while (x > 0) {
        sisa = x % 2;
        x = x / 2;
        if (sisa == 0)
            biner = '0' + biner;
        else
            biner = '1' + biner;
    }
    if (biner == "")
        biner = "0";
    cout << "Bilangan binernya: " << biner << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {//contoh 8.21
    int n, i, j;
    cout << "Masukkan segitiga : "; cin >> n;
   for (i = 1; i <= n; i++){
for (j = 1; j <= i; j++){
    cout << "*";
} 
cout << endl; 
}
return 0;
}








