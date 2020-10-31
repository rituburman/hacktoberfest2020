// Link : https://leetcode.com/problems/longest-palindromic-substring/submissions/

class Solution {
public:
    string longestPalindrome(string s) {
        
        
        int n = s.length(), maxlength = 1;
        // if(n == 1) return 1;

        bool dp[n][n];
        memset(dp, false ,sizeof(dp));
        
        for(int i=0;i<n;i++) dp[i][i] = true;
        
        int start = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1] = true;
                start = i;
                maxlength = 2;
            }
        }
        
        for(int k=3;k<=n;k++){
            
            for(int i=0;i<n-k+1;i++){
                int j = i+k-1;
                
                if(dp[i+1][j-1] && s[i]==s[j]){
                    
                    dp[i][j] = true;
                    if(k>maxlength){
                        start=i;
                        maxlength = k;
                    }
                }
                
            }
        }
        string ans = "";
        cout<<maxlength<<endl;
        // while(maxlength--) ans+=
        for(int i=start;i<start+maxlength;i++)
            ans+=s[i];
        // return maxlength;
        return ans;
    }
};
