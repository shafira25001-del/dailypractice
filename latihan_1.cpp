#include <iostream>
using namespace std;
int main(){
    string text1 = "Aidan The Asprack";
    string *text2 = &text1;

    cout << text1 << endl;
    cout << *text2 << endl;

    

}