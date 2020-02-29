#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <string>

using namespace std;


int solution(vector<int> &a, vector<int> &w) {
  int n = a.size();
  if (n == 0) return 0;

  vector<vector<int>> dp(n, vector<int>(n, 1e9));
  for (int i = 0; i < n; i++) {
    dp[i][i] = w[i];
  }
  // cumulative sum
  vector<int> cuSum(n + 1, 0);
  cuSum[0] = 0;
  for (int i = 1; i <= n; i++) {
    cuSum[i] = cuSum[i - 1] + w[i - 1];
  }

  for (int len = 2; len <= n; len++) {
    for (int i = 0, j = i + len - 1; j < n; i++, j++) {
      for (int k = i; k <= j; k++) {
        int left = 0, right = 0;
        if (k != i) {
          left = dp[i][k - 1] + cuSum[k - 1 + 1] - cuSum[i + 1 - 1];
        }
        if (k != j) {
          right = dp[k + 1][j] + cuSum[j + 1] - cuSum[k + 1 + 1 - 1];
        }
        int root = w[k];
        dp[i][j] = min(dp[i][j], root + left + right);
      }
    }
  }
  return dp[0][n - 1];
}

int main() {
  vector<int> a = {10, 12, 20};
  vector<int> w = {34, 8, 50};
  cout << solution(a, w) << endl;
}