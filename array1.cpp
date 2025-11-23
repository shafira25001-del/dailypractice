#include<iostream>
using namespace std;
void tukar(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

    
    string kata [5] = {"h","e","l","l","o"};

void hello (string kata[5], int n){
    for(int i = 4; i < n-1; i++){
        for(int j = 4; i < n-i-1; j--){
            if(kata[j] < kata[j-1]){
                 tukar(kata[j], kata[j-1]);
            }
        }
        cout << endl;
    }
}
 
int main(){
    int n;
    hello(kata, 5);         
    for(int i = 4; i >= 0; i--){
        cout << " " << kata[i];     
    }
    cout << endl;

    return 0;
}