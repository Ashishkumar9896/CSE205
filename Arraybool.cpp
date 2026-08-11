#include <iostream>
using namespace std;
int main() {
    //array of boolean
    bool arrbool[5];
    arrbool[0] = true;
    arrbool[4]=false;

    char arrchar[5];
    arrchar[0] = 'a';
    arrchar[4] = 'e';
    for (int i = 0; i < 5; i++) {
        cout << arrbool[i] << " ";
        
    }
    cout << endl;
    
    int size2 = sizeof(arrchar) / sizeof(arrchar[0]);
    int a=0;
    while(a<size2){
        cout << arrchar[a] << " ";
        a++;
    }
    cout << endl;

    double arrdouble[5];
    arrdouble[0] = 1.1;
    arrdouble[4] = 5.5;
    for (int i = 0; i < 5; i++) {
        cout << arrdouble[i] << " ";
    }
    cout << endl;

    return 0;
}