#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            cout<<"Element found at index : "<<mid<<endl;
            break;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low>high){
        cout<<"Element not found"<<endl;
    }
    return 0;
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=30;
    binarySearch(arr,n,target);
    return 0;
}