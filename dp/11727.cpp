//
// Created by 문인주 on 2023/04/06.
//
#include <iostream>
#include "vector"
using namespace std;
int main() {
    int num;
    cin >> num;
    vector<int> v(num+1);
    v[1] = 1;
    v[2] = 3;
    for(int i = 3; i<=num; i++) {
        v[i] = v[i-1]+v[i-2]*2;
        v[i] = v[i]%10007;
    }
    cout << v[num];
}
