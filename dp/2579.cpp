//
// Created by 문인주 on 2023/04/07.
// 2579
#include "iostream"
using namespace std;
int a[301];
int dp[301];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = a[0];
    dp[1] = dp[0]+a[1];
    dp[2] = max(dp[0]+a[2], a[1]+a[2]);
    for(int i = 3; i < n; i++) {
        dp[i] = max(dp[i-3]+a[i-1]+a[i], dp[i-2]+a[i]);
    }
    cout << dp[n-1];
}
