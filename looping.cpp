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
}
