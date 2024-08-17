#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for(int i = 1; i <= tinggi; i++) {
        // Cetak sisi tinggi
        cout << "|";

        // Cetak spasi untuk sisi miring
        for(int j = 1; j < i; j++) {
            cout << "  "; // Dua spasi untuk menambah jarak
        }

        // Cetak sisi miring atau datar
        if(i < tinggi) {
            cout << "\\";
        } else {
            for(int k = 1; k <= tinggi; k++) {
                cout << "_";
            }
            cout << "\\";
        }

        // Akhir baris
        cout << endl;
    }
    system("pause");
    return 0;
}
