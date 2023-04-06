//
// Created by 문인주 on 2023/04/06.
// 11722
//
#include "iostream"
#include "algorithm"
using namespace std;
int a[1001];
int dp[1001];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    dp[0] = 1;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        dp[i] = 1;
        for(int j = 0; j <i; j++) {
            if(a[i]< a[j]) {
                dp[i] = max(dp[j]+1, dp[i]);
            }
        }
        ans = max(dp[i], ans);
    }
    cout << ans;
}
