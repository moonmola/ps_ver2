//
// Created by 문인주 on 2023/04/05.
//
#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if( a== 1) {
        cout << "*";
        return 0;
    }
    if ( a >1) a = a-1;
    for(int i = 0; i < a; i++) {
        for(int j = a-i; j>0; j--) {
            cout << " ";
        }
        cout << "*";
        if(i>0) {
            for(int k = 0; k < i*2-1; k++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < (a+1)*2-1; i++) {
        cout << "*";
    }

}
