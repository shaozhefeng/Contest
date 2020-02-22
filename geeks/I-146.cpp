#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool IsAnswer(vector<int> &a) {
  int n = a.size();
  for (int i = 0; i < n; i++) {
    a[i] %= 4;
  }
  vector<vector<int>> dp(n, vector<int>(4, 0));
  dp[0][a[0]] = 1;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= 3; j++) {
      int pre1 = (j - a[i] + 4) % 4;
      int pre2 = (j + a[i]) % 4;
//      cout << pre1 << " " << pre2 << endl;
      dp[i][j] = dp[i - 1][pre1] || dp[i - 1][pre2];
//      cout << dp[i][j] << endl;
    }
  }
  return dp[n - 1][0] == 1;
}

int main() {
  vector<int> a = {1, 2, 3, 4, 6};
  cout << IsAnswer(a) << endl;
}