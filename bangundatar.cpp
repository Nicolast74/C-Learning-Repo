#include <iostream>
#include <math.h>
using namespace std;

// Fungsi untuk menghitung luas persegi
float luaspersegi(float a) {
    return a * a;
}

// Fungsi untuk menghitung keliling persegi
float kelilingpersegi(float a) {
    return 4 * a;
}

// Fungsi untuk menghitung luas persegi panjang
float luaspersegipanjang(float p, float l) {
    return p * l;
}

// Fungsi untuk menghitung keliling persegi panjang
float kelilingpersegipanjang(float p, float l) {
    return 2 * (p + l);
}

// Fungsi untuk menghitung luas lingkaran
float luaslingkaran(float r) {
    return M_PI * pow(r, 2);
}

// Fungsi untuk menghitung keliling lingkaran
float kelilinglingkaran(float r) {
    return 2 * M_PI * r;
}

// Fungsi untuk menghitung luas segitiga
float luassegitiga(float a, float t) {
    return 0.5 * a * t;
}

// Fungsi untuk menghitung keliling segitiga
float kelilingsegitiga(float a, float t, float m) {
    return a + t + m;
}

int main() {
    float a, b, r, t, m, p, l;
    int pil;

    cout << "Program Perhitungan Luas dan Keliling Bangun Geometri" << endl;
    cout << "1. Lingkaran" << endl;
    cout << "2. Persegi" << endl;
    cout << "3. Persegi Panjang" << endl;
    cout << "4. Segitiga" << endl;
    cout << "Pilih Bangun Geometri : ";
    cin >> pil;

    switch (pil) {
        case 1:
            cout << "1. Luas Lingkaran" << endl;
            cout << "2. Keliling Lingkaran" << endl;
            cout << "Pilih : ";
            cin >> pil;
            if (pil == 1) {
                cout << "Masukkan Jari-Jari : ";
                cin >> r;
                cout << "Luas Lingkaran : " << luaslingkaran(r) << endl;
            } else if (pil == 2) {
                cout << "Masukkan Jari-Jari : ";
                cin >> r;
                cout << "Keliling Lingkaran : " << kelilinglingkaran(r) << endl;
            } else {
                cout << "Masukkan pilihan yang benar" << endl;
            }
            break;

        case 2:
            cout << "1. Luas Persegi" << endl;
            cout << "2. Keliling Persegi" << endl;
            cout << "Pilih : ";
            cin >> pil;
            if (pil == 1) {
                cout << "Masukkan Sisi : ";
                cin >> a;
                cout << "Luas Persegi : " << luaspersegi(a) << endl;
            } else if (pil == 2) {
                cout << "Masukkan Sisi : ";
                cin >> a;
                cout << "Keliling Persegi : " << kelilingpersegi(a) << endl;
            } else {
                cout << "Masukkan pilihan yang benar" << endl;
            }
            break;

        case 3:
            cout << "1. Luas Persegi Panjang" << endl;
            cout << "2. Keliling Persegi Panjang" << endl;
            cout << "Pilih : ";
            cin >> pil;
            if (pil == 1) {
                cout << "Masukkan Panjang : ";
                cin >> p;
                cout << "Masukkan Lebar : ";
                cin >> l;
                cout << "Luas Persegi Panjang : " << luaspersegipanjang(p, l) << endl;
            } else if (pil == 2) {
                cout << "Masukkan Panjang : ";
                cin >> p;
                cout << "Masukkan Lebar : ";
                cin >> l;
                cout << "Keliling Persegi Panjang : " << kelilingpersegipanjang(p, l) << endl;
            } else {
                cout << "Masukkan pilihan yang benar" << endl;
            }
            break;

        case 4:
            cout << "1. Luas Segitiga" << endl;
            cout << "2. Keliling Segitiga" << endl;
            cout << "Pilih : ";
            cin >> pil;
            if (pil == 1) {
                cout << "Masukkan Alas : ";
                cin >> a;
                cout << "Masukkan Tinggi : ";
                cin >> t;
                cout << "Luas Segitiga : " << luassegitiga(a, t) << endl;
            } else if (pil == 2) {
                cout << "Masukkan Sisi Alas : ";
                cin >> a;
                cout << "Masukkan Sisi Tinggi : ";
                cin >> t;
                cout << "Masukkan Sisi Miring : ";
                cin >> m;
                cout << "Keliling Segitiga : " << kelilingsegitiga(a, t, m) << endl;
            } else {
                cout << "Masukkan pilihan yang benar" << endl;
            }
            break;

        default:
            cout << "Pilihan tidak valid" << endl;
            break;
    }

    return 0;
}
