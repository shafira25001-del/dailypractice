/*
Nama Program : fizz_buzz
Nama         : Shafira Nailah Afifah
NPM          : 140810250008
Tanggal Buat : 8 November 2025
Deskripsi    : Seorang musisi bernama Paul McCartney ingin membuat permainan sederhana bernama FizzBuzz.
*/

#include <iostream>
using namespace std;
int main () {
    int N;
    cout << "N: ";
    cin >> N;

    if ((N % 3 == 0) && (N % 5 == 0)){
        cout << "FizzBuzz" << endl;
    }
    if(N % 3 == 0) {
        cout << "fizz" << endl;

    }
    if(N % 5 == 0) {
        cout << "buzz" << endl;
    }
    if ((N % 3 != 0) && (N % 5 != 0)){
        cout << "N" << endl;
    }
        
}