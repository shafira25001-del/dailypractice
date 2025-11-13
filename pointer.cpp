#include <iostream>
using namespace std;
int main(){
    int nilai = 20;
    int *ptr = &nilai;

    cout << "nilai awal : " << nilai << endl;
    *ptr = 25;

    cout << "nilai akhir : " << nilai << endl;
}