#include <iostream>
using namespace std;

void input(int arr[], int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void tukar (int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                tukar(arr[j], arr[j+1]);
            }
        }

    }
}

int main(){
    int n;
    int arr[100];
    input(arr, n);
    bubbleSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}