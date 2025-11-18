#include<iostream> 
using namespace std;
int main(){
    int n = 4;
    int nums[] = {3,4,5,2};
    int angka = 0;
    int maks = 0;
    for(int i = 0; i < n ; i++){
         for(int j = 0; j < n ; j++){
            angka = (nums[i] - 1)* (nums[j] - 1);
            if(angka > maks){
                maks = angka;
            }
        }
           
    }
    cout << maks;
    return 0;


}