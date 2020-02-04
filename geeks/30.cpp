
// 左右对称的题，一般就像剥洋葱一样
#include<iostream>
#include<cstdio>
#include <vector>

using namespace std;
#define MAX 1000

int mod = 1e9 + 7;

// dif is diference between sums of first n bits
// and last n bits i.e., dif = (Sum of first n bits) -
//							 (Sum of last n bits)
int countSeqUtil(int n, int dif, vector<vector<int>> &lookup) {
  // We can't cover diference of more
  // than n with 2n bits
  if (abs(dif) > n)
    return 0;

  // n == 1, i.e., 2 bit int sequences
  if (n == 1 && dif == 0)
    return 2;
  if (n == 1 && abs(dif) == 1)
    return 1;

  // Check if this subbproblem is already solved
  // n is added to dif to make sure index becomes
  // positive
  if (lookup[n][n + dif] != -1)
    return lookup[n][n + dif];

  int res = // First bit is 0 & last bit is 1
          countSeqUtil(n - 1, dif + 1, lookup) % mod +

          // First and last bits are same
          2 * countSeqUtil(n - 1, dif, lookup) % mod +

          // First bit is 1 & last bit is 0
          countSeqUtil(n - 1, dif - 1, lookup) % mod;

  // Store result in lookup table and return the result
  lookup[n][n + dif] = res % mod;
  return lookup[n][n + dif];
}

// A Wrapper over countSeqUtil(). It mainly initializes lookup
// table, then calls countSeqUtil()
int countSeq(int n) {
  // Initialize all entries of lookup table as not filled
  // call countSeqUtil()
  vector<vector<int>> lookup(MAX, vector<int>(MAX, -1));
  return countSeqUtil(n, 0, lookup);
}

// Driver program
int main() {
  int n;
  while (cin >> n) {
    cout << countSeq(n) << endl;
  }
  return 0;
}

/*
further
O(n)
https://www.geeksforgeeks.org/count-even-length-binary-sequences-with-same-sum-of-first-and-second-half-bits/
*/