#include <iostream>
#include <string>
using namespace std;

int main() {
    // Daftar nama yang sudah diurutkan secara alfabet
    string nama[] = {"Adit", "Eris", "Jayo", "Maxwel", "Nayaka", "Rara", "Satriyo"};
    int n = 7;
    string target;
    int low = 0, high = n - 1;
    int mid;
    bool ditemukan = false;

    cout << "=== PROGRAM PENCARIAN NAMA (BINARY SEARCH) ===" << endl;
    cout << "Masukkan nama yang ingin dicari (Huruf Awal Kapital): ";
    getline(cin, target); // input nama target dari pengguna

    // Proses pencarian menggunakan binary search
    while (low <= high) {
        mid = (low + high) / 2;

        if (nama[mid] == target) {
            cout << "Nama \"" << target << "\" ditemukan pada urutan ke-" << mid+1 << "\" dalam daftar kontak" << endl;
            ditemukan = true;
            break;
        }
        else if (nama[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!ditemukan)
        cout << "Nama \"" << target << "\" tidak ditemukan dalam daftar." << endl;

    return 0;
}
