#include <iostream>
#include <string>

using namespace std;

class Barang {
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;

         void tampilkanData() {
            cout << "Nama Barang        : " << nama << endl;
            cout << "Jumlah             : " << jumlah << endl;
            cout << "Kategori           : " << kategori << endl;
            cout << "Tanggal Produksi   : " << tanggalProduksi << endl;
            cout << "-----------------------------" << endl;
         }
};

int main() {
      // Object 1: Elektronik
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2024-01-10";

    // Object 2: Non-Elektronik
    Barang nonElektronik;
    nonElektronik.nama = "Buku";
    nonElektronik.jumlah = 25;
    nonElektronik.kategori = "Non-Elektronik";
    nonElektronik.tanggalProduksi = "2023-12-05";
}