/*
Nama Program : Rata-rata nilai mahasiswa
Nama         : Shafira Nailah Afifah
NPM          : 140810250008
Tanggal Buat : 5 November 2025
Deskripsi    : Sebuah universitas ingin membuat program sederhana untuk membantu menghitung total dan rata-rata nilai dari beberapa mata kuliah yang diambil oleh seorang mahasiswa.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int hitungTotal(int arr[], int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += arr[i];
    }

    return total;
}

float RataRata(int arr[], int n){
    int total = hitungTotal(arr, n);
    return (float) total / n;

}

int main(){
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    
    cout << "Total nilai = " << hitungTotal(arr, n) << endl;
    cout << "Rata-rata nilai = " << RataRata(arr, n) << fixed << setprecision(2);
}


