//
// Created by 문인주 on 2023/04/05.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    for(int i = 0; i < num; i++) {
        for(int j = num-i-1; j>0; j--){
            cout << " ";
        }
        for(int j = 1; j<=i+1;j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1;i < num; i++) {
        for(int j = 0; j<i;j++) {
            cout << " ";
        }
        for(int j = num; j>i; j--) {
            cout << "*";
        }
        cout<< endl;
    }
}