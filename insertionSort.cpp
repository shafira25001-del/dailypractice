#include<iostream>
using namespace std;
void input(int &n, int array[]){
    cout << "masukkan jumlah angka: ";
    cin >> n;
    cout << "Masukkan angka-angka: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
}

void tukar (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void InsertionSort(int n, int array[]){
    for(int i = 1; i < n; i++){
        for(int j = i; j >= 1 ; j--){
            if(array[j] < array[j-1]){
                tukar(array[j], array[j-1]);
            } else {
                break;
            }
        }
    }
}

int main(){
    int n;
    int array[100];
    input(n, array);
    InsertionSort(n, array);

    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;

}