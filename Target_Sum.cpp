//Target Sum:-https://leetcode.com/problems/target-sum/
class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int diff) {
         int n=arr.size();
        long s=0,s1;
	    for(int i=0;i<n;i++){
	        s+=arr[i];
	    }
        s1=s+diff;
	    if(((abs(diff))>s)||(s1%2!=0))
	    return 0;
        
	    else{
            s1=(s1/2);
	    int dp[n+2][s1+2];
             for(int i=0;i<=s1;i++){ 
        dp[0][i]=0;
             }
     for(int i=0;i<=n;i++){ 
          dp[i][0]=1;
         
     }
          for(int i=1;i<n+1;++i){
          if(arr[i-1]==0)
        { 
        dp[i][0]=2*dp[i-1][0]; 
        }
            else
    {
         dp[i][0]=dp[i-1][0];
    }
}
	    for(int i=1;i<n+1;i++){
	        for(int j=1;j<s1+1;j++){
	                if(arr[i-1]<=j)
	                dp[i][j]=(dp[i-1][j-arr[i-1]]+dp[i-1][j]);
	                else
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    return dp[n][s1];
	    }
    }
};
