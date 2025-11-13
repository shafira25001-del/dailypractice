#include <iostream>
using namespace std;

void tukar(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;
    cin >> a >> b;

    int *ptrA = &a;
    int *ptrB = &b;

    if(*ptrA > *ptrB){
        tukar(ptrA,ptrB);
    }
    
    cout << *ptrA << " " << *ptrB << endl;


}