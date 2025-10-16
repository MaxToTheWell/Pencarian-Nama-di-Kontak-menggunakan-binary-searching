#include <iostream>
#include <string>
using namespace std;

int main() {
    // Daftar nama yang sudah diurutkan secara alfabet
    string nama[] = {"Bintang", "Edbert", "Faqih", "Fany", "Hengky", "Ica", "Jehan", "Joshua", "Kadek", "Kanaya", "Kholifah", 
        "Ledi", "Maxwel", "Nayla", "Putri h", "Putri n", "Rafi", "Regina", "Revalinda", "Rifki", "Riffa", "Ridho",
        "Rizky a", "Rizky n", "Salsabila", "Satriyo", "Valerie", "Vivian", "Joshua", "Yaza", "Yostiar", "Zidane",};
    int n = 31;
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
