#include<iostream>
using namespace std;
int main(){
int digits[] ={1,2,3};
int n = sizeof(digits) / sizeof(digits[0]);

int angka = 1;
for(int i = n - 1; i >= 0; i--){
    int tambah = digits[i] + angka;
    digits[i] = tambah % 10;
    angka = tambah / 10;  
}

    if(angka > 0){
        cout << "[" << angka << ",";
        for( int i = 0; i < n; i++){
            cout << digits[i];
            if( i < n - 1) cout << ",";
        }
            cout << "]" << endl;
        } else {
        cout << "[";
        for(int i = 0; i < n; i++){
            cout << digits[i];
            if(i < n - 1) cout << ",";
        }   
            cout << "]" << endl;
        }
     return 0;
}
   

