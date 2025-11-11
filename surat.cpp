/*
Nama Program : surat
Nama         : Shafira Nailah Afifah
NPM          : 140810250008
Tanggal Buat : 11 November 2025
Deskripsi    : surat
*/

#include<iostream>
using namespace std;

struct Surat {
    string penerima;
    string pengirim;
    string nomorTelepon;
};

Surat inputData(){
    Surat temp;
    cout << "masukkan nama penerima surat: ";
    getline(cin, temp.penerima);
    cout << "masukkan nama pengirim surat: ";
    getline(cin, temp.pengirim);
    cout << "masukkan nomor telepon penerima surat: ";
    getline(cin, temp.nomorTelepon);
    return temp;
}

void tampilkanData(const Surat &surat){
    cout << "nama penerima : " << surat.penerima << endl;
    cout << "nama pengirim : " << surat.pengirim << endl;
    cout << "nomor telepon penerima surat: " << surat.nomorTelepon << endl;
}

int main(){ 
    Surat temp = inputData();
    tampilkanData(temp);

}

