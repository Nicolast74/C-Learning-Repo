#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

// Fungsi untuk menghitung panjang sisi A
float hitungSisiA(float b, float c) {
    return sqrt(pow(c, 2) - pow(b, 2));
}

// Fungsi untuk menghitung panjang sisi B
float hitungSisiB(float a, float c) {
    return sqrt(pow(c, 2) - pow(a, 2));
}

// Fungsi untuk menghitung panjang sisi C
float hitungSisiC(float a, float b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main() {
    float a, b, c;
    int pil;

    do {
        system("color a");
        system("cls");
        cout << "Program Hitung Panjang Sisi Segitiga" << endl;
        cout << "Menggunakan Rumus Pythagoras" << endl;
        cout << "==============================" << endl;
        cout << "  |\\" << endl;
        cout << "  | \\" << endl;
        cout << "  |  \\" << endl;
        cout << "A |   \\ C" << endl;
        cout << "  |    \\" << endl;
        cout << "  |     \\" << endl;
        cout << "  |______\\" << endl;
        cout << "     B      " << endl;
        cout << "==============================" << endl;
        cout << "Pilih sisi yang akan dihitung." << endl;
        cout << "1. Sisi A" << endl;
        cout << "2. Sisi B" << endl;
        cout << "3. Sisi C" << endl;
        cout << "Jawab : ";
        cin >> pil;

        switch (pil) {
            case 1:
                cout << "Masukkan sisi Datar (b) : ";
                cin >> b;
                cout << "Masukkan sisi Miring (c) : ";
                cin >> c;

                // Memanggil fungsi untuk menghitung sisi A
                a = hitungSisiA(b, c);

                cout << "Panjang sisi Tegak (A) adalah: " << a << endl;
                break;

            case 2:
                cout << "Masukkan sisi Tinggi (a) : ";
                cin >> a;
                cout << "Masukkan sisi Miring (c) : ";
                cin >> c;

                b = hitungSisiB(a, c);
                cout << "Panjang sisi Datar (B) adalah: " << b << endl;
                break;

            case 3:
                cout << "Masukkan sisi Tinggi (a) : ";
                cin >> a;
                cout << "Masukkan sisi Datar (b) : ";
                cin >> b;

                c = hitungSisiC(a, b);
                cout << "Panjang sisi Miring (C) adalah: " << c << endl;
                break;

            default:
                cout << "Masukkan Pilihan yang benar" << endl;
                break;
        }

        cout << "Apakah Anda ingin menghitung lagi? (y/n): ";
        char jawab;
        cin >> jawab;
        if (jawab != 'y' && jawab != 'Y') {
            break;
        }

    } while (true);
    system("pause");
    return 0;
}
