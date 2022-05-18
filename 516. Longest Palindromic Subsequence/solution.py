class Solution:
    def longestPalindromeSubseq(self, s: str) -> int:
        
        n = len(s)
        
        if not s:
            return 0
        n=len(s)
        dp=[[0]*n for _ in range(n)]
        for i in range(n):
            dp[i][i]=1
            
        for i in range(1,n):
            for j in range(n-i):
                k=j+i
                if s[j]==s[k]:
                    dp[j][k]=dp[j+1][k-1]+2
                else:
                    dp[j][k]=max(dp[j+1][k],dp[j][k-1])

        return dp[0][n-1]