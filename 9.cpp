//array contains duplicate elements but we have to find the unique elements in an array arr[1,1,3,2,3,2,4]
#include <iostream>
using namespace std;
int uniqueElementsxor(int arr[], int n) {
    int x1 = arr[0];
    for (int i = 1; i < n; i++) {
        x1 = x1 ^ arr[i];
    }
    cout << x1;
    return 0;
}
int main(){
    int arr[7] = {1, 1, 3, 2, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    uniqueElementsxor(arr, n);
    return 0;
}