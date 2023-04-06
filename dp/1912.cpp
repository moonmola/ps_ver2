//
// Created by 문인주 on 2023/04/07.
//
#include "iostream"
using namespace std;
int a[100001];
int dp[100001];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = -1e9;
    for(int i = 0; i < n ; i++){
        dp[i] = max(dp[i-1]+a[i], a[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans;
}