#include <iostream>
using namespace std;    

int kodeJurusan;
string namaJurusan; 
string statusKuota;

void input() {
    cout << "== PENDAFTARAN JURUSAN KAMPUS == " << endl;
    cout << "Teknologi Informasi" << endl;
    cout << "Teknik Elektro" << endl;
    cout << "Sistem Informasi" << endl;
    cout << "------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia(15 kursi)";
            break;
        case 2:
            namaJurusan = "Teknik Elektro";
            statusKuota = "Kouta Penuh";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

void output() {
    cout << "\n === HASIL SELEKSI ===" << endl;
    cout << "Jurusan pilihan: " << namaJurusan << endl;
    cout << "Status Kuota: " << statusKuota << endl;
    cout << "-------------------------------" << endl;      
}

int main() {
    input();
    pilihanJurusan();
    output();
    return 0;
}   