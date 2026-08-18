//To find the missing number
#include <iostream>
using namespace std;
int missingNumber(int arr[], int n) {
    int total = (n) * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum+=arr[i];
    }
    cout<<total-sum;
    return 0;
}
int missingNumber1(int arr1[], int n1) {
    int total1 = (n1) * (n1 + 1) / 2;
    int sum1 = 0;
    for (int i = 0; i < n1; i++) {
        sum1+=arr1[i];
    }
    cout<<total1-sum1;
    return 0;
}
int missingXOR(int arr2[], int n2) {
    int x1 = arr2[0];
    for (int i = 1; i < n2; i++) {
        x1 = x1 ^ arr2[i];
    }
    int x2 = 1;
    for (int i = 2; i <= n2 + 1; i++) {
        x2 = x2 ^ i;
    }
    cout << (x1 ^ x2);
    return 0;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    missingNumber(arr, n);
    cout << endl;
    int arr1[5] = {1, 2, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    missingNumber1(arr1, n1);
    cout << endl;
    int arr2[5] = {1, 2, 3, 4, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    missingXOR(arr2, n2);
    return 0;
}