//
// Created by 문인주 on 2023/04/06.
//
#include "iostream"
#include "vector"
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> testNum(t);
    for(int i = 0; i <t; i++) {
        cin >> testNum[i];
    }
    for(int i = 0; i <t; i++) {
        vector<int> dp(testNum[i]+1);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        for(int j =4; j <= testNum[i]; j++) {
            dp[j] = dp[j-1]+dp[j-2]+dp[j-3];
        }
        cout << dp[testNum[i]] << endl;
    }
}