#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> m >> n;
    vector<vector<int>> dp(n, vector<int>(m + 1, 0));
    for (int i = 0; i <= m; i++) {
      dp[0][i] = i;
    }
    for (int i = 1; i < n; i++) {
      for (int j = 1; j <= m; j++) {
		// save the cumulative
        dp[i][j] = dp[i][j - 1];
        // pick
        if (j / 2 > 0) {
          dp[i][j] += dp[i - 1][j / 2];
        }
      }
    }
    cout << dp[n - 1][m] << endl;
  }
  return 0;
}