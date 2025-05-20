#include <iostream>
#include <string>
#include <fstream>
#include <map>
using namespace std;
//akun: username-> password, role
map<string, pair<string, string>>akun; 
// Load akun from file
void loadAkun(){ 
    ifstream file("akun.txt");
    string user, pass, role;
    while (file >> user >> pass >> role) {
        akun[user] = make_pair(pass, role);
    }
    file.close();
}
//simpan akun
void simpanAkun(string username, string password, string role){ 
    ofstream file("akun.txt", ios::app);
    file << username << " " << password << " " << role << '\n';
    file.close();
}
// menggantikan isi file lama sepenuhnya
void simpanSemuaAkun() {
    ofstream file("akun.txt");
    for (const auto& a : akun) {
        file << a.first << " " << a.second.first << " " << a.second.second << '\n';
    }
    file.close();
}
// mencatat waktu login
void simpanHistoriLogin(const string& username) {
    ofstream file("histori_login.txt", ios::app);
    time_t now = time(0);
    file << username << " login pada " << ctime(&now);
    file.close();
}
// menampilkan data profil
void tampilkanProfil(const string& username) {
    cout << "\n=== Profil Pengguna ===\n";
    cout << "Username: " << username << "\n";
    cout << "Role: " << akun[username].second << "\n";
}
// menampilkan histori login
void tampilkanHistoriLogin(const string& username) {
    ifstream file("histori_login.txt");
    string line;
    cout << "\n=== Histori Login " << username << " ===\n";
    while (getline(file, line)) {
        if (line.find(username) == 0) {
            cout << line << '\n';
        }
    }
    file.close();
}
// ganti password
void gantiPassword(const string& username) {
    string lama, baruPass, konfirm;
    cout << "Masukkan password lama: "; cin >> lama;
    if (lama != akun[username].first) {
        cout << "Password lama salah!\n";
        return;
    }
    cout << "Masukkan password baru: "; cin >> baruPass;
    cout << "Konfirmasi password baru: "; cin >> konfirm;
    if (baruPass != konfirm) {
        cout << "Konfirmasi tidak cocok!\n";
        return;
    }
    akun[username].first = baruPass;
    simpanSemuaAkun();
    cout << "Password berhasil diganti.\n";
}
//reset password
void lupaPassword() {
    string username;
    cout << "Masukkan username/email anda: ";
    cin >> username;
    
    if (akun.find(username) == akun.end()) {
        cout << "Username tidak ditemukan.\n";
        return;
    }
    // tanya password baru
    string passwordBaru, konfirmasi;
    cout << "Masukkan password baru: "; cin >> passwordBaru;
    cout << "Konfirmasi password baru: "; cin >> konfirmasi;
    if (passwordBaru != konfirmasi) {
        cout << "Password tidak cocok. Gagal reset password.\n";
        return;
    }
    akun[username].first = passwordBaru;
    // Simpan ulang seluruh akun ke file (karena sebelumnya hanya append)
    ofstream file("akun.txt");
    for (auto &a : akun) {
        file << a.first << " " << a.second.first << " " << a.second.second << "\n";
    }
    file.close();
    cout << "Password berhasil direset.\n";
}

// Menu admin
void menuAdmin() {
    cout << "\n=== Menu Admin ===\n";
    cout << "1. Tambahkan barang\n";
    cout << "2. \n";
}

// Menu customer
void menuCustomer(const string& username, const string& role) {
    cout << "\n=== Menu Customer ===\n";
    cout << "1. Cari Barang\n";
    cout << "2. Masukkan keranjang\n";
    cout << "3. Checkout barang\n";
    cout << "4. Lihat perjalanan barang\n";
}

void menuPengaturanAkun(const string& username, const string& role) {
    char pilihan;
    do {
        cout << "\n=== Pengaturan Akun ===\n";
        cout << "1. Lihat Profil\n";
        cout << "2. Ganti Password\n";
        cout << "3. Lihat Histori Login\n";
        cout << "4. Kembali\n";
        cout << "Pilih: ";
        cin >> pilihan;

         switch (pilihan) {
            case '1': 
            tampilkanProfil(username);
            break;
            case '2': 
            gantiPassword(username); 
            break;
            case '3': 
            tampilkanHistoriLogin(username); 
            break;
            case '4': 
            return;
            default: 
            cout << "Pilihan tidak valid.\n"; 
            break;
        }
    } while (true);
}
// menu customer utama
void menuCustomerUtama(const string& username, const string& role) {
    char pilih;
    do {
        cout << "\n=== Menu Customer ===\n";
        cout << "1. Belanja / Lihat Produk\n";  // Contoh fitur
        cout << "2. Pengaturan Akun\n";
        cout << "3. Kembali\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
            case '1':
                menuCustomer(username, role);
                break;
            case '2':
                menuPengaturanAkun(username, role);
                break;
            case '3':
                return;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (true);
}
// menu utama admin
void menuUtama(const string& username, const string& role) {
    int pilihan;
    do {
        cout << "\n=== Menu Utama (" << role << ") ===\n";
        cout << "1. Pengaturan Akun\n";
        cout << "2. Fitur " << (role == "admin" ? "Admin" : "Customer") << "\n";
        cout << "3. Logout\n";
        cout << "Pilih: "; cin >> pilihan;
        switch (pilihan){
        case 1:
            menuPengaturanAkun(username, role);
            break;
        case 2:
            if (role == "admin") {
                menuAdmin();
            } else {
                menuCustomerUtama(username, role);
            }
            break;
        case 3:
            cout << "Logout berhasil.\n";
            return;
        default:
            cout << "Pilihan tidak valid.\n";
            break;
        }
    } while (true);
}

int main(){
    string username, password;
    loadAkun(); // Muat data dari file saat program mulai
    int pilih, percobaan = 3; // Maksimal 3 kali percobaan login
    do{
    cout << "===Selamat datang di Sopi Sell===\n";
    cout << "1. login\n";
    cout << "2. Belum punya akun? Daftar di sini\n";
    cout << "3. Lupa password/reset password\n";
    cout << "4. keluar?\n";
    cout << "Silakan pilih menu(1-4): "; cin >> pilih;
    switch (pilih){
        case 1:
            if (percobaan <= 0) {
                cout << "Kesempatan login habis. Silakan coba lagi nanti.\n";
                continue;
            }
            
            cout << "==Login==" << '\n';
            cout << "Masukkan username/email anda: "; cin >> username;
            cout << "Masukkan password: "; cin >> password;
            
            if  (akun.find(username) != akun.end() && akun[username].first == password){
                string role = akun[username].second;
                cout << "Login berhasil.\n";
                cout << "Selamat datang, " << username << "(" << role << ")!" << '\n';
                simpanHistoriLogin(username);
                menuUtama(username, akun[username].second);
            } else {
                percobaan--;
                if (percobaan > 0) {
                cout << "Login gagal. Coba lagi (" << percobaan << " percobaan tersisa)\n";
                } else {
                cout << "Anda telah gagal login 3 kali. Kembali ke menu utama.\n";
                percobaan = 3;
                }
            }
        break; 
        
        case 2:
            cout << "== Daftar Akun Baru ==\n";
            cout << "Masukkan username: "; cin >> username;
            if (akun.find(username) != akun.end()) {
                cout << "Username sudah terdaftar!\n";
            } else {
                cout << "Masukkan password: "; cin >> password;
                cout << "1. Admin\n2. Customer\nPilih role: ";
                char r; cin >> r;
                string role = (r == '1') ? "admin" : "customer";
                simpanAkun(username, password, role);
                akun[username] = make_pair(password, role);
                cout << "Akun berhasil dibuat.\n";
            }
            break;
        case 3:
            lupaPassword();
            break;
        case 4:
            cout << "Terima kasih telah menggunakan Sopi Sell\n"; 
            return 0;
        default:
            cout << "tidak valid.\n";
        }
    } while (true);
    
    return 0;
}