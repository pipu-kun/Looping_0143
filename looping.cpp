#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x; 

    cout << "Perulangan For " << endl;
    for (int i = 0; i <= 4; i++) {
        cout << "Teknologi Informasi UMY" << i << endl;
        cout << endl;
    }
    srand(time(0));

    cout << "Perulangan While " << endl;
    x = 1 + rand() % 10;
    while (x <= 5) {
        cout << "Bilangan acak: " << x << endl;
        x =rand() % 10;
    }

    cout << "Bilangan acak while yang terakhir: " << x << endl;
    cout << endl;

    cout << "Perulangan Do...While " << endl;
    x = 1 + rand() % 10;
    do {
        cout << "Bilangan acak: " << x << endl;
        x =rand() % 10;
    } while (x <= 5);

    cout << "Bilangan acak do-while yang terakhir: " << x << endl;
    cout << endl;
}


// Logika Not
#include <iostream>
using namespace std;

int main() {
    float nilM,nilB, rerata;
    string status;

    cout << "Masukkan Nilai matematika: ";
    cin >> nilM;
    cout << "Masukkan Nilai Bahasa Inggris: ";
    cin >> nilB;
    rerata = (nilM + nilB) / 2;
    if (!(rerata < 60)) {
        status = "Lulus";
    } else {
        status = "Tidak Lulus";
    }
    cout << "Status kelulusan: " << status << ",dengan nilai rerata: " << rerata << endl;
}