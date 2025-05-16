#include <iostream>
using namespace std;

int main() {
    string nama;
   cout << "Halo, siapa namamu?" << endl;
   getline (cin, nama);
   cout << "Senang bertemu denganu, " << nama << endl;
   return 0;
}
#include <iostream>
using namespace std;

int main() {
float alas, tinggi, luas;
cout << "masukkan alas: "; cin >> alas;
cout << "masukkan tinggi: "; cin >> tinggi;
luas = 0.5 * (alas * tinggi);
cout << "hasilnya adalah " << luas << "m" << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
   int jumlah_hari, tahun, bulan, hari;
   cout << "Masukkan jumlah hari : "; cin >> jumlah_hari;
   tahun = jumlah_hari/365;
   jumlah_hari %= 365;
   bulan = jumlah_hari/30;
   hari = jumlah_hari %= 30;
   cout << "Hasil durasi proyek tersebut adalah : " << tahun << " tahun, " << bulan << " bulan, " << hari << " hari." << endl;
   
    return 0;
}
#include <iostream>
using namespace std;

int main() {
   int total_detik, hari, jam, menit, detik;
   cout << "Masukkan jumlah detik : "; cin >> total_detik;
   hari = total_detik / 86400;
   total_detik %= 86400;
   jam = total_detik / 3600;
   total_detik %= 3600;
   menit = total_detik /60;
   detik = total_detik %= 60;
   cout << "Hasil konversi : " << hari << " hari, " << jam << " jam, " << menit << " menit, " << detik << " detik." <<  endl; 
   
    return 0;
}
#include <iostream>
using namespace std;

int main() {
   int hari_1, bulan_1, tahun_1, total_hari_1, hari_2, bulan_2, tahun_2, total_hari_2, selisih_hari;
   cout << "Masukkan tanggal yang ingin anda mulai : "; cin >> hari_1 >> bulan_1 >> tahun_1;
   cout << "Masukkan tanggal yang ingin anda selesaikan : "; cin >> hari_2 >> bulan_2  >> tahun_2;
   total_hari_1 = tahun_1 * 365  + bulan_1 * 30 + hari_1;
   total_hari_2 = tahun_2 *  365 + bulan_2 * 30 + hari_2;
   selisih_hari = total_hari_2 - total_hari_1;
   int tahun, bulan, hari;
   tahun = selisih_hari/365;
   selisih_hari %= 365;
   bulan = selisih_hari/30;
   hari = selisih_hari % 30;
   cout << "selisihnya adalah : " << tahun << " tahun, " << bulan << " bulan, "<< hari << " hari." << endl; 

   return 0;
}
#include <iostream>
using namespace std;

int main() {
int x, y, z;
cout << "Masukkan nilai x y z yang anda mau : "; cin >> x >> y >> z;
cout << "Maka setelah ditukar nilai tersebut menjadi : " << y << " " << z <<  " " << x << endl;    

return 0;
}
#include <iostream>
using namespace std;

int main() {
    int uang, pecahan[] {1000, 500, 100, 50, 25};
    int jumlah[5] = {0};
    cout << "Masukkan jumlah uang yang ingin anda konversi ke pecahan (kelipatan 25): "; cin >> uang;
    for (int i=0; i<5 ; i++) {
        jumlah[i] =  uang / pecahan[i];
        uang %= pecahan[i];
    }
    for (int i=0; i<5; i++) {
        if (jumlah[i] > 0)
        cout << "Maka pecahan uang yang didapat adalah" << endl;
        cout << pecahan[i] << " : " << jumlah[i] << " lembar" << endl;
    } 

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int cm, m, km;
    cout << "Masukkan jarak perjalanan seekor semut tersebut (dalam cm) : "; cin >> cm;
    km = cm/100000;
    cm %= 100000;
    m = cm/100;
    cm %= 100;
    cout << "Maka jarak yang dilewati semut tersebut adalah " << km << " km " << m << " m " << cm << " cm." << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double m, inchi, kaki, yard;
    cout << "Masukkanlah panjang suatu benda (dalam m) : "; cin >> m;
    inchi = m/2.54;
    kaki = m/30.48;
    yard = m/91.44;
    cout << "Maka dalam inchi panjang tersebut adalah " << inchi << " inchi" <<endl;
    cout << "Maka dalam kaki panjang tersebut adalah " << kaki << " kaki" << endl;
    cout << "Maka dalam yard panjang tersebut adalah " << yard << " yard" <<endl;
    return 0;
}

#include <iostream>
using namespace std;
//latihan soal 1
int main (){
    int bilangan_positif;
    cout << "Masukkan bilangan positif : "; cin >> bilangan_positif;
    if (bilangan_positif % 4 == 0) {
        cout << "Bilangan tersebut kelipatan 4." << endl;
    } else {    
        cout << "Bilangan tersebut bukan kelipatan 4." << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
//latihan soal 2
int main (){
    int total_diskon, total;
    cout << "Masukkanlah total belanja anda : Rp. "; cin >> total;
    if (total > 10000) {
        total_diskon = total - (total * 0.10);  
    }
    cout << "Totalnya setelah diskon adalah : Rp. " << total_diskon << endl;
    return 0;
}
#include <iostream>
using namespace std;
//latihan soal 3
int main (){
    int x, y, z;
    cout << "Masukkanlah angka yang anda inginkan : "; cin >> x >> y >> z;
    if (x > y) swap (x, y);
    if (y > z) swap (y, z);
    if (x > y) swap (x, y);
    cout << "Maka angka tersebut setelah diurut menjadi : " << x << " " << y << " " << z << endl;
    return 0;
}
#include <iostream>
using namespace std;
//latihan soal 4
int main (){
    int a, b, c;
    cout << "Masukkan setiap sisi segitiga (3 sisi) : "; cin >> a >> b >> c;
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)){
    cout << "Segitiga tersebut adalah siku siku." << endl;
    } else if (a == b && b == c) {
        cout << "Segitiga tersebut adalah sama sisi." << endl;    
    } else if (a == b || b == c || a == c) {
        cout << "Segitiga tersebut adalah sama kaki." << endl;
    } else {
        cout << "Segitiga tersebut adalah sembarang." << endl;
    }   
    return 0;
}
#include <iostream>
using namespace std;
//latihan soal 5
int main (){
   char ch;
   cout << "Masukkan karakter digit : "; cin >> ch;
   if (ch >= '0' && ch <= '9') {
    cout <<  "Nilai integer : " << (ch - '0') << endl;
   } else {
    cout << "Bukan digit, nilai = -1" << endl;
   }
    return 0;
}
#include <iostream>
using namespace std;
//latihan soal 6
int main (){
   int total, sisa;
   cout << "Masukkanlah total belanja anda : "; cin >> total;
   sisa = total % 50;
   if (sisa < 25) {
    total -= sisa;
} else {
    total += (50-sisa);
}
   cout << "Totaknla setelah dibulatkan adalah : " << total << endl;
   return 0;
}
#include <iostream>
using namespace std;
//latihan soal 7
int main() {
    int angka;
    string romawi[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
    cout << "Masukkan bilangan (1-10): "; cin >> angka;
    if (angka >= 1 && angka <= 10) {
        cout << "Angka Romawi : " << romawi [angka - 1] << endl;
    } else {
        cout << "Angka belum bisa dideteksi." << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
//latihan soal 7
string konversiRomawi(int angka) {
    int nilai[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string hasil = "";
    for (int i = 0; i < 13; i++) {
        while (angka >= nilai[i]) {
            hasil += simbol[i];
            angka -= nilai[i];
        }
    }
    return hasil;
}

int main() {
    int angka;
    cout << "Masukkan bilangan positif: ";cin >> angka;
    if (angka <= 0) {
        cout << "Bilangan harus positif!" << endl;
    } else {
        cout << "Angka Romawi: " << konversiRomawi(angka) << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
//latihan soal 8
int main() {
    int pixel;
    cout << "Masukkan nilai pixel: "; cin >> pixel;
    if (pixel < 0) pixel = 0;
    if (pixel > 255) pixel = 255;
    cout << "Nilai setelah clipping: " << pixel << endl;
    return 0;
}
#include <iostream>
using namespace std;
//Latihan soal 9
int main() {
    double tinggi, berat, berat_1, berat_2, berat_ideal, toleransi = 2.0;
    cout << "Masukkan tinggi anda: "; cin >> tinggi;
    cout << "Masukkan berat anda: "; cin >> berat;
    berat_1 = tinggi - 100;
    berat_2 = berat_1 * 10 / 100;
    berat_ideal = (berat_1 - berat_2);
    double batas_minimal = berat_ideal - toleransi; 
    double batas_maksimal = berat_ideal + toleransi;
    if ( berat_ideal == 0 && berat_ideal >= batas_minimal && berat_ideal <= batas_maksimal) {
        cout << "Berat badan Anda dalam kategori ideal." << std::endl;
        } else {
        cout << "Berat badan Anda di luar kategori ideal." << std::endl;
        }
    cout << "Berat badan ideal anda adalah : " << berat_ideal << endl;
    cout << "rentang berat badan ideal anda adalah : " << batas_minimal << " dan " << batas_maksimal << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
//Latihan soal 11
int main() {
    string hari[] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    string hari_1, hari_2;
    int index1 = -1, index2 = -1;
    cout << "Masukkan hari pertama: ";
    cin >> hari_1;
    cout << "Masukkan hari kedua: ";
    cin >> hari_2;
    for (int i = 0; i < 7; i++) {
        if (hari[i] == hari_1) index1 = i;
        if (hari[i] == hari_2) index2 = i;
    }
    int selisih = (index2 - index1 + 7) % 7;
    if (selisih == 0) selisih = 7;
    cout << "Selisih antara " << hari_1 << " dan " << hari_2 << " adalah " << selisih << " hari." << endl;
    return 0;
}
#include <iostream>
using namespace std;

bool isKabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

int jumlahHariDalamBulan(int bulan, int tahun) {
    if (bulan == 2) return isKabisat(tahun) ? 29 : 28;
    if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) return 30;
    return 31;
}

int hitungJumlahHari(int d, int m, int y) {
    int totalHari = d;
    for (int i = 1; i < m; i++) {
        totalHari += jumlahHariDalamBulan(i, y);
    }
    for (int i = 1; i < y; i++) {
        totalHari += isKabisat(i) ? 366 : 365;
    }
    return totalHari;
}
int main() {
    int d1, m1, y1, d2, m2, y2;
    cout << "Masukkan tanggal pertama (dd mm yyyy): ";
    cin >> d1 >> m1 >> y1;
    cout << "Masukkan tanggal kedua (dd mm yyyy): ";
    cin >> d2 >> m2 >> y2;
    int selisih = abs(hitungJumlahHari(d2, m2, y2) - hitungJumlahHari(d1, m1, y1));
    cout << "Selisih kedua tanggal: " << selisih << " hari" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int usia;
    cout << "Masukkan usia: ";
    cin >> usia;
    if (usia >= 0 && usia <= 5) {
        cout << "Kategori: Balita" << endl;
    } else if (usia <= 16) {
        cout << "Kategori: Anak-anak" << endl;
    } else if (usia <= 20) {
        cout << "Kategori: Remaja" << endl;
    } else if (usia <= 60) {
        cout << "Kategori: Dewasa" << endl;
    } else {
        cout << "Kategori: Tua" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int hitungUsia(int tahunLahir, int tahunBerangkat) {
    return tahunBerangkat - tahunLahir;
}

int main() {
    string kota, nama;
    int tanggalLahir, bulanLahir, tahunLahir;
    int tanggalBerangkat, bulanBerangkat, tahunBerangkat;
    double hargaTiket, hargaAkhir;
    cout << "Masukkan kota tujuan: ";
    cin >> kota;
    cout << "Masukkan nama penumpang: ";
    cin >> nama;
    cout << "Masukkan tanggal lahir (dd mm yyyy): ";
    cin >> tanggalLahir >> bulanLahir >> tahunLahir;
    cout << "Masukkan tanggal keberangkatan (dd mm yyyy): ";
    cin >> tanggalBerangkat >> bulanBerangkat >> tahunBerangkat;
    cout << "Masukkan harga tiket: ";
    cin >> hargaTiket;
    int usia = hitungUsia(tahunLahir, tahunBerangkat);
    if (usia < 16) {
        hargaAkhir = hargaTiket * 0.75; 
    } else {
        hargaAkhir = hargaTiket;
    }
    cout << "Harga tiket untuk " << nama << " ke " << kota << " adalah: Rp " << hargaAkhir << endl;    
    return 0;
}













#include <iostream>
using namespace std;
//latihan 1 (a)
int main() {
   int n;
   char c;
   cout << "Masukkan jumlah karakter yang anda inginkan : "; cin >> n;
   cout << "Masukkan " << n << " karakter : ";
   for(int i = 0; i<n ; i++) {
   cin >> c;
   cout << c;
   }
   return 0;
}
#include <iostream>
using namespace std;
//latihan 1 (b)
int main() {
   char c;
   int nc=0;
   cout << "Masukkan karakter (diakhiri '.') : "; cin >> noskipws;
   while (cin >> c && c != '.') {
    nc ++;
   }
    cout << "Jumlah karakter yang dibaca : " << nc << endl;
    return 0;
}
#include <iostream>
using namespace std;
//latihan 2
int main() {
   int n, jumlah=0;
   cout << "Masukkan jumlah bilangan ganjil yang ingin dijumlahkan: ";cin >> n;   
   for (int i = 1; i <= n; i++) {
   jumlah += (2 * i - 1);
   }
   cout << "Maka jumlah " << n << " bilangan ganjil dari 1 sampai bilangan ganjil ke " << n << " adalah: " << jumlah << endl;
   return 0;
}
#include <iostream>
using namespace std;
//Latihan 3
int main() {
    int n, jumlah = 0;
    cout << "Masukkan nilai akhir ganjil tersebut : "; cin >> n;
    for (int i = 1; i <= n; i += 2) { 
        jumlah += i;
    }
    cout << "Jumlah bilangan ganjil dari 1 sampai " << n << " adalah: " << jumlah << endl;
    return 0;
}

#include <iostream>
using namespace std;
//Latihan 5
int main() {
    for (int x = 0; x <= 25; x++) {
        for (int y = 0; y <= 25 - x; y++) {
            int z = 25 - x - y;
            cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
//Latihan 6
void konversiRomawi(int angka) {
    int nilai[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    for (int i = 0; i < 13; i++) {
        while (angka >= nilai[i]) {
            cout << simbol[i];
            angka -= nilai[i];
        }
    }
}
int main() {
    int angka;
    cout << "Masukkan bilangan bulat positif: "; cin >> angka;   
    if (angka <= 0) {
        cout << "Bilangan harus positif!" << endl;
    } else {
        cout << "Bilangan Romawi: ";
        konversiRomawi(angka);
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
//Latihan 7
int main() {
    int saldo = 100000;
    int jumlah, kode;
    cout << "==Selamat datang di bank mandiri==" << endl; 
    cout << "0 = setor" << endl;
    cout << "1=tarik" << endl;
    cout << "9=keluar" << endl;
    while (true) {
        cout << "Masukkan kode transaksi (0=setor, 1=tarik, 9=keluar): "; cin >> kode;
        if (kode == 9) break;
        cout << "Masukkan jumlah uang: "; cin >> jumlah;
        if (kode == 0) {
            saldo += jumlah;
        } else if (kode == 1) {
            if (saldo - jumlah >= 10000) {
                saldo -= jumlah;
            } else {
                cout << "Saldo tidak mencukupi! Minimal saldo Rp10.000" << endl;
            }
        } else {
            cout << "Kode transaksi tidak valid!" << endl;
        }
        cout << "Saldo saat ini: Rp" << saldo << endl;
    }
cout << "==Terimakasih sudah memakai jasa bank ini==" << endl;
    return 0;
}
#include <iostream>
using namespace std;
//Latihan 8
int main() {
    int n;
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: "; cin >> n;
    int a = 1, b = 1, next;
    cout << "Fibonacci: " << a << " " << b << " ";
    for (int i = 3; i <= n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;
//Latihan 9
int main() {
    int n;
    cout << "Masukkan bilangan: "; cin >> n;
    bool prima = true;
    if (n < 2) prima = false;
    for (int i = 2; i * i <= n && prima; i++) {
        if (n % i == 0) prima = false;
    }
    if (prima)
        cout << n << " adalah bilangan prima." << endl;
    else
        cout << n << " bukan bilangan prima." << endl;
    return 0;
}
#include <iostream>
using namespace std;
//Latihan 10
int main() {
    int n, jumlah = 0;
    cout << "Masukkan jumlah bilangan ganjil pertama yang ingin dijumlahkan: "; cin >> n;
    for (int i = 1; i <= n; i++) {
        jumlah += (2 * i - 1);
    }
    cout << "Jumlah " << n << " bilangan ganjil pertama adalah: " << jumlah << endl;
    return 0;
}
#include <iostream>
using namespace std;
//Latihan 4
int main() {
    int n;
    cout << "Masukkan tinggi segitiga: "; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}