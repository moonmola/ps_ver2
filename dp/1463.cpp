//
// Created by 문인주 on 2023/04/05.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i = n; i > 1; i--) {
        if(v[i-1] == 0)   v[i-1] =v[i]+1;
        else if(v[i]+1 < v[i-1]) v[i-1] = v[i]+1 ;

        if(i%2 == 0) {
            if(v[i/2] == 0)   v[i/2] = v[i]+1;
            else if(v[i]+1 < v[i/2]) v[i/2] = v[i]+1 ;
        }

        if(i%3 == 0) {
            if(v[i/3] == 0)   v[i/3] = v[i]+1;
            else if(v[i]+1 < v[i/3]) v[i/3] = v[i]+1 ;
        }
    }
    cout << v[1];
}