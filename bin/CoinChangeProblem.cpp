// Coin Change Problem And Varieties:

// Problem Link : https://leetcode.com/problems/coin-change 
1. Recursive Solution for no of coins required to get target sum:
    
    int coins[n];
    int countOfCoins(int lastIndex, int target){
      if(lastIndex<=0 && target>=1) return 0; 
      if(target == 0) return 1;        // for minm return 0;     
      // for minm, if(lastIndex<0) return INT_MAX-1;
      int includeCurrent = return countOfCoins(lastIndex, target - coins[lastIndex]);   //for minm, return 1+countOfCoins(lastIndex, target - coins[lastIndex]);
      int excludeCurrent = return countOfCoins(lastINdex-1, target);  
      return includeCurrent+excludeCurrent;       //for minm, return min(includeCurrent,excludeCurrent)
   }
   
   //call:
   countOfcoins(n-1,target)
   
2. Dynamic Programming solution for noOfWays to reach a target:
    
    int solution(vector<int>coins, int target){
      int noOfCoins = coins.size();
      int dp[target+1][noOfCoins];
      for(int i=0;i<noOfCoins;i++)
        dp[0][i] = 1; //since for a target of 0, any one coin can meet that.
      for(int i=1;i<=target;i++){     //start i=1, You are making mistake here everytime.
        for(int j=0;j<noOfCoins;j++){
          int x = (i-coins[j]>=0) ? dp[i-coins[j]][j] : 0;
          int y = (j>=1) ? dp[i][j-1] : 0;
          dp[i][j] = x+y;
        }
      }
      return dp[target][noOfCoins-1];
   }
2. Dynamic Programming solution for min no of coins reqd to reach a target:
    
    int solution(vector<int>coins, int target){
      int noOfCoins = coins.size();
      int dp[target+1][noOfCoins];
      for(int i=0;i<noOfCoins;i++)
        dp[0][i] = 0; //since for a target of 0, any one coin can meet that.
      for(int i=1;i<=target;i++){     //start i=1, You are making mistake here everytime.
        for(int j=0;j<noOfCoins;j++){
          int x = (i-coins[j]>=0) ? 1+dp[i-coins[j]][j] : INT_MAX-1;
          int y = (j>=1) ? dp[i][j-1] : INT_MAX-1;
          dp[i][j] = min(x,y);
        }
      }
      if( dp[target][noOfCoins-1] == INT_MAX-1 ) ? return -1 : return dp[target][noOfCoins-1]; // returns -1 if no possible combinations found.
   }
