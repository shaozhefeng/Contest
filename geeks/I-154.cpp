#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


int main() {
  int t;
  int mod = 1e9 + 7;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(n, vector<int>(k + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j <= min(k, i * (i + 1) / 2); j++) {
        for (int m = 0; m <= i; m++) {
          if (j - m >= 0 && j - m <= (i - 1) * i / 2) {
            dp[i][j] += dp[i - 1][j - m];
            dp[i][j] %= mod;
          }
        }
      }
    }
    cout << dp[n - 1][k] << endl;
  }
}