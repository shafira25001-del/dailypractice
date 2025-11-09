#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int array[n] = {1, 2, 3, 4, 10, 11};
    int sum = 0;

    for(int i= 0; i < n; i++){
        sum += array[i];

    }
     cout << "hasil penjumlahan array adalah: " << sum << endl;

}