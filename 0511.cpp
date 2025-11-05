/*
Nama Program : faktorial
Nama         : Shafira Nailah Afifah
NPM          : 140810250008
Tanggal Buat : 5 November 2025
Deskripsi    :
*/

#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "masukkan nilai n : ";
    cin >> n;
    long long faktorial = 1;

    for(int i = 1; i <= n; i++){
        faktorial = faktorial * i;
    }

    cout << n << "!" << "adalah " << faktorial;
    return 0;

}