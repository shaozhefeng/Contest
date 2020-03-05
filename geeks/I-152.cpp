#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    vector<int> sum(n + 1, 0);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      sum[i + 1] = sum[i] + nums[i];
    }
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
      dp[i][i] = nums[i];
    }
    for (int len = 2; len <= n; len++) {
      for (int i = 0, j = i + len - 1; j < n; i++, j++) {
        int left = nums[i] + (sum[j + 1] - sum[i + 1] - dp[i + 1][j]);
        int right = nums[j] + (sum[j] - sum[i] - dp[i][j - 1]);
        dp[i][j] = max(left, right);
      }
    }
    cout << dp[0][n - 1] << endl;
  }
  return 0;
}

