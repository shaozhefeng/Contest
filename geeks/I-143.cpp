//https://leetcode.com/problems/wildcard-matching/description/
class Solution {
public:
    bool isMatch(string s, string p) {
        int m = p.size();
        int n = s.size();
        vector<vector<bool>> dp(m+1,vector<bool>(n+1,0));
        dp[0][0]=1;
        int k=0;
        while(k<m && p[k]=='*'){
            dp[k+1][0]=1;
            k++;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(p[i-1]=='?' || p[i-1]==s[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else if(p[i-1]=='*'){
                    dp[i][j] = dp[i-1][j] || dp[i][j-1] || dp[i-1][j-1];
                }
            }
        }
        return dp[m][n];
    }
};