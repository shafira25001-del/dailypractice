/*
Nama Program : Stok Gudang
Nama         : Shafira Nailah A
NPM          : 140810250008
Tanggal Buat : 7 November 2025
Deskripsi    : Seorang manajer gudang ingin mengetahui sisa stok dari 10 jenis barang yang berbeda di akhir hari. Data pemasukan (beli) dan pengeluaran (jual) sudah tercatat. Buatlah program yang menghitung dan menampilkan sisa stok untuk setiap barang.
*/

#include<iostream>
using namespace std;
int main(){
    int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};
    int sisa [10];

    for(int i = 0; i < 10; i++) {
    sisa[i] = beli[i] - jual[i];
    }

    cout << "sisa barang di akhir hari" << endl;
    for(int i = 0; i < 10; i++){
        cout << "barang ke- " << i + 1 << " : " << sisa[i] << endl;
    }

    return 0;
}

