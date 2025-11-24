#include <iostream>
using namespace std;
int main(){
    int gaji_pokok;
    cout << "masukkan gaji pokok: ";
    cin >> gaji_pokok;

    if (gaji_pokok == 5000000){
        cout << "golongan A" << endl;

    } else if  (gaji_pokok == 7500000){
        cout << "golongan B" << endl;
    } else {
        cout << "golongan C" << endl;
    }

    return 0;
}