#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/description/

// Time Complexity: O(d*f*t)
int numRollsToTarget(int d, int f, int t) {
    vector<vector<int>> dp(d+1,vector<int>(t+1,0));
    int mod = 1e9+7;
    dp[0][0]=1;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=t;j++){
            for(int k=1;k<=f;k++){
                if(j>=k){
                    dp[i][j]+=dp[i-1][j-k];
                    dp[i][j]%=mod;
                }
            }
        }
    }
    return dp[d][t];
}

// if we really think about it...
// optimized dp solution
int numRollsToTarget(int d, int f, int t) {
    vector<vector<long>> dp(d+1,vector<long>(t+1,0));
    int mod = 1e9+7;
    dp[0][0]=1;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=t;j++){
            // ith dice's face is 1, then dp[i-1][j-1]
            // ith dice's face is not 1, then dp[i][j-1] 
            // 可以假设算j-1的时候，ith dice多算出来1; 但是当ith dice打出来f的时候，不能再多了
            dp[i][j]=dp[i][j-1]+dp[i-1][j-1];
            dp[i][j]%=mod;
            if(j-1-f>=0){
                // 所以要去掉当ith dice is f,and t is j-1. dp[i][j-1]
                dp[i][j]-=dp[i-1][j-1-f];
            }
            dp[i][j]=(dp[i][j]+mod)%mod;
        }
    }
    return dp[d][t];
}
// further step, optimize spcae complexity
int numRollsToTarget(int d, int f, int t) {
    vector<vector<long>> dp(2,vector<long>(t+1,0));
    int mod = 1e9+7;
    dp[0][0]=1;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=t;j++){
            dp[i%2][j]=dp[i%2][j-1]+dp[(i+1)%2][j-1];
            dp[i%2][j]%=mod;
            if(j-1-f>=0){
                dp[i%2][j]-=dp[(i+1)%2][j-1-f];
            }
            dp[i%2][j]=(dp[i%2][j]+mod)%mod;
        }
        if(i==1){
            dp[0][0]=0; // super important
        }
    }
    return dp[d%2][t];
}