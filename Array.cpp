#include <iostream>
using namespace std;
int main() {

    
//Array creation
//array of character can store  only char and it is known as string also
//datatype are of 2 type
//primary -int,bool,float,double,char
//secondary -array,structure,union,enum We built it ourself 
//declare- just creating variable but not assigning any value
//initialize- creating variable and assigning value to it
//define-assigning value to variable which is already declared


//size of array

int arrint[5];
arrint[0]=1;
arrint[4]=5;

int size1 = sizeof(arrint) / sizeof(arrint[0]);
//sizeof(arrint)=20 ; int =4 and capacity of array = 5 ; 5*4=20;
//sizeof(arrint[0])=4 ; int =4

//cout << :console output
//cin >> :console input
//traversing array
for (int i = 0; i < size1; i++) {
    cout << arrint[i] << " ";
}
cout << endl;

    return 0;
}