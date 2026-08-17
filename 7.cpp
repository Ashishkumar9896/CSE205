#include <iostream>
using namespace std;

int main(){
    int arr[5]={10,30,40,50};

    //TO TRAVERSE AN ARRAY AND FIND THE INDEX OF A PARTICULAR ELEMENT

    for(int i=0;i<4;i++){
        if(arr[i]==30){
            cout<<i<<endl;
        }
    }

   //To find largest element in an array

    int a=arr[0];
    for (int i=1;i<4;i++){
        if(arr[i]>a){
            a=arr[i];
        }
    }
    cout <<a<<endl; 

    //To find second largest element of an array

    int b=arr[0];
    int c=arr[1];
    for(int i=1;i<4;i++){
        if(arr[i]>b){
            c=b;
            b=arr[i];
        }
        else if(arr[i]>c && arr[i]!=b){
            c=arr[i];
        }
    }
    cout <<c<<endl;

    // to insert at first position of an array

    for(int i=4;i>0;i--){
        arr[i]=arr[i-1];

    }
    arr[0]=100;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    int arr1[6]={10,20,30,40,50};

    //at given index inserting an element in an array
    int index=2;
    for(int i=5;i>index;i--){
        arr1[i]=arr1[i-1];
    }
    arr1[index]=200;
    for (int i=0;i<6;i++){
        cout<<arr1[i]<<endl;
    }

    //to delete an element from an array
    int arr2[5]={10,20,30,40,50};
    int index1=2;
    for(int i=index1;i<4;i++){
        arr2[i]=arr2[i+1];
    }
    int arr3[4];
    for(int i=0;i<4;i++){
        arr3[i]=arr2[i];
        
    }
    for(int i=0;i<4;i++){
        cout<<arr3[i]<<endl;
    }

    //to count occurrance of element
    int arr4[]={1,2,9,1,7,1,1};
    int count=0;
    int z=sizeof(arr4)/sizeof(arr4[0]);
    for(int i=0;i<z;i++){
        if(arr4[i]==1){
            count++;
        }
    }
    cout<<"occurance of 1: "<<count<<endl;
    
    return 0;
}