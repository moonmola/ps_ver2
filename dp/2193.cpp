//
// Created by 문인주 on 2023/04/06.
//
#include "iostream"
#include "vector"
using namespace std;
int main() {
    //
    // 0 1
    // 0 1
    // 1 0

    int n;
    cin >> n;
    vector<vector<long long>> v(n+1, vector<long long>(2,0));
    v[1][0] = 0;
    v[1][1] = 1;
    for(int i = 2; i <= n; i++){
        v[i][0] = v[i-1][0]+v[i-1][1];
        v[i][1] = v[i-1][0];
    }
    cout << v[n][0]+v[n][1];

}