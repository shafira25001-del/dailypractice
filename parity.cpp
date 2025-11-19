#include<iostream>
using namespace std;
int main(){
int nums[] = {3,1,2,4};
int n = sizeof(nums) / sizeof(nums[0]);
int result[100];
int j = 0;


for (int i = 0; i < n; i++) {
    if (nums[i] % 2 == 0) {
        result[j] = nums[i];
        j++;
    }
}

for (int i = 0; i < n; i++) {
    if (nums[i] % 2 != 0) {
        result[j] = nums[i];
        j++;
    }
}
cout << "[";
    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i < n - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}
