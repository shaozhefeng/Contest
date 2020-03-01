#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int p, q, r;
    cin >> p >> q >> r;
    int dp[p + 1][q + 1][r + 1][3];
    for (int i = 0; i <= p; i++) {
      for (int j = 0; j <= q; j++) {
        for (int k = 0; k <= r; k++) {
          dp[i][j][k][0] = 0;
          dp[i][j][k][1] = 0;
          dp[i][j][k][2] = 0;
        }
      }
    }

    for (int i = 0; i <= p; i++) {
      for (int j = 0; j <= q; j++) {
        for (int k = 0; k <= r; k++) {
//          cout << i << " " << j << " " << k << endl;
          if (i - 1 >= 0) {
            if (i == 1 && j == 0 && k == 0) {
              dp[i][j][k][0] = 1;
            } else {
              dp[i][j][k][0] = dp[i - 1][j][k][1] + dp[i - 1][j][k][2];
            }
//            cout << dp[i][j][k][0] << endl;
          }
          if (j - 1 >= 0) {
            if (j == 1 && i == 0 && k == 0) {
              dp[i][j][k][1] = 1;
            } else {
              dp[i][j][k][1] = dp[i][j - 1][k][0] + dp[i][j - 1][k][2];

            }
//            cout << dp[i][j][k][1] << endl;
          }
          if (k - 1 >= 0) {
            if (k == 1 && i == 0 && j == 0) {
              dp[i][j][k][2] = 1;
            } else {
              dp[i][j][k][2] = dp[i][j][k - 1][0] + dp[i][j][k - 1][1];
            }
//            cout << dp[i][j][k][2] << endl;
          }
        }
      }
    }
    cout << dp[p][q][r][0] + dp[p][q][r][1] + dp[p][q][r][2] << endl;
  }
  return 0;
}