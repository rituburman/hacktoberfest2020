class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n1 = str1.size(), n2 = str2.size();
        vector <vector <int>> dp(n1+1, vector <int> (n2+1,0));
        for(int i=0;i<=n1;i++) {
            for(int j=0;j<=n2;j++) {
                if(i==0||j==0) {
                    dp[i][j] = 0;
                    continue;
                }
                if(str1[i-1]==str2[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        string ans = "";
        int i=n1,j=n2;
        while(i>0 && j>0) {
            if(str1[i-1]==str2[j-1]) {
                ans += str1[i-1];
                i--; j--;
            } else {
                if(dp[i][j-1] > dp[i-1][j]) {
                    ans += str2[j-1];
                    j--;
                } else {
                    ans += str1[i-1];
                    i--;
                }
            }
        }
        while(i>0) {
            ans += str1[i-1];
            i--;
        }
        while(j>0) {
            ans += str2[j-1];
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
