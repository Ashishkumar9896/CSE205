#include <iostream>
using namespace std;

void isPrime(int n){
    
    /*int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a++;

        }
    }
        if(a==0){
            cout<<"Prime number"<<endl;
        }
        else{
            cout<<"Not a prime number"<<endl;

        
    }
}*/
for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"Not a prime number"<<endl;
        break;
    }
    else{
        cout<<"Prime number"<<endl;
        break;
    }
}
}

int main(){
    int n;
    cin>>n;
    isPrime(n);
}

