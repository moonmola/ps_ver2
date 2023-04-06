//
// Created by 문인주 on 2023/04/07.
// 11054
#include "iostream"
#include "algorithm"
using namespace std;
int a[1001];
int dp[2][1001];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 1;
    for(int i = 0; i < n; i++) {
        dp[0][i] = 1;
        dp[1][n-1-i] = 1;
        for(int j = 0; j < i; j ++) {
            if(a[j]<a[i]) dp[0][i] = max(dp[0][i], dp[0][j]+1);
        }
        for(int j = n-1; j >=0; j--) {
            if(a[j]<a[n-1-i]) dp[1][n-1-i] = max(dp[1][n-1-i], dp[1][j]+1);
        }
    }
    for(int i = 0; i < n; i++) {
        ans = max(ans, dp[0][i]+dp[1][i]);
    }

    cout << ans-1;


}
