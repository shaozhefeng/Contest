#include <iostream>
#include <vector>

using namespace std;
#define MAX5 100

int maximumZeros(int *arr, int n, int k) {
  vector<vector<int>> dp(k + 1, vector<int>(MAX5 + 1, -1));
  dp[0][0] = 0;
  for (int p = 0; p < n; p++) {
    int pw2 = 0, pw5 = 0;

    while (arr[p] % 2 == 0) {
      pw2++;
      arr[p] /= 2;
    }

    while (arr[p] % 5 == 0) {
      pw5++;
      arr[p] /= 5;
    }

    // 反着来，0 1 背包节省space技巧
    for (int i = k; i >= 1; i--)
      for (int j = 0; j <= MAX5; j++) {

        // 前序结果需要存在
        if (j - pw5 >= 0 && dp[i - 1][j - pw5] != -1) {
          dp[i][j] = max(dp[i][j], dp[i - 1][j - pw5] + pw2);
//          cout << "i,j: " << i << " " << j << " " << dp[i][j] << endl;
        }
      }
  }

  int ans = 0;
  for (int i = 0; i <= MAX5; i++) {
    ans = max(ans, min(i, dp[k][i]));
  }

  return ans;
}

// Driver function 
int main() {
  int arr[] = {15, 16, 3, 25, 9};
  int k = 3;
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << maximumZeros(arr, n, k) << endl;
  return 0;
} 
