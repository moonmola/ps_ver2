//
// Created by 문인주 on 2023/04/06.
// 11055
//
#include "iostream"
#include "algorithm"
using namespace std;

int a[1001];
int dp[1001];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = a[0];
    for(int i = 1; i < n; i++) {
        dp[i] = a[i];
        for(int j = 0; j <i;j ++) {
            if(a[j]<a[i]) {
                dp[i] = max(dp[j]+a[i], dp[i]);
            }
        }
    }
    int result = 0;
    for(int i = 0;i < n;i++) {
        if (result < dp[i]) result = dp[i];
    }
    cout << result;
}