//
// Created by 문인주 on 2023/04/07.
// 1699
// 시간초과 retry
#include "iostream"
using namespace std;
int a[100001];
int dp[100001];
int main() {
    int n;
    cin >> n;

    for(int i = 1; i*i <= n; i++) {
        dp[i*i] = 1;
    }
    dp[2] = 2;
    for(int i = 3; i <= n; i++) {
        if(dp[i] == 1) continue;
        int temp = 1e9;
        if(i%2 == 0) {
            temp = min(dp[i / 2] * 2, temp);
        }
        for(int j = 1; j <= (i-1)/2; j++ ){
            temp = min(dp[j]+dp[i-j], temp);
        }
        dp[i] = temp;
    }
    cout << dp[n];
}
