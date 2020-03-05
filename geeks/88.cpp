#include <iostream>
#include <vector>
#include <algorithm>

#define MAXN 109

using namespace std;

int countarray(int n, int k, int x) {
  int dp[MAXN] = {0};

  // Initalising dp[0] and dp[1].
  dp[0] = 0;
  dp[1] = 1;

  // Computing f(i) for each 2 <= i <= n.
  for (int i = 2; i < n; i++)
    dp[i] = (k - 2) * dp[i - 1] +
            (k - 1) * dp[i - 2];

  return (x == 1 ? (k - 1) * dp[n - 2] : dp[n - 1]);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, x;
    cin >> n >> k >> x;
    vector<vector<int>> dp(n, vector<int>(k + 1, 0));
    dp[0][1] = 1;
    int lastSum = 1;
    for (int i = 1; i < n - 1; i++) {
      int curSum = 0;
      for (int j = 1; j <= k; j++) {
        dp[i][j] = lastSum - dp[i - 1][j];
        curSum += dp[i][j];
      }
      lastSum = curSum;
    }
    dp[n - 1][x] = lastSum - dp[n - 2][x];
    cout << dp[n - 1][x] << " " << countarray(n, k, x) << endl;
  }
  return 0;
}

