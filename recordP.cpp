#include <iostream>
using namespace std;

struct Koordinat {
    int x;
    int y;

};

typedef Koordinat* ptrKoordinat;

 int main(){
    Koordinat pos;
    ptrKoordinat ptr_pos = nullptr;

    ptr_pos = &pos;
    ptr_pos->x = 8;

    cout << pos.x << '\n';
    cout << ptr_pos->x << '\n';

    ptr_pos->y = 5;

    cout << pos.y << '\n';
    cout << ptr_pos->y << '\n';

    return 0;
 }
