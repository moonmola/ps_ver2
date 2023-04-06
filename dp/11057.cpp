//
// Created by 문인주 on 2023/04/06.
// 11057
//
#include "iostream"
#include "vector"
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n+1,vector<int>(10,0));
    for(int j = 0; j <=9;j++) {
        v[1][j] = 1;
    }
    for(int i =2; i <=n; i++ ){
        int temp = 0;
        for(int j = 0; j <=9;j++) {
            temp += v[i-1][j];
            v[i][j] = temp%10007;
        }
    }
    int result = 0;
    for(int j = 0; j <=9;j++) {
        result += v[n][j];
    }
    cout << result%10007;

}