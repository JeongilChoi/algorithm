#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> dp;

int main() {
    cin >> n;
    dp.resize(n+1);
    dp[1] = 1, dp[2] = 2;
    for(int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
        dp[i] %= 15746;
    }
    cout << dp[n];
    return 0;
}
