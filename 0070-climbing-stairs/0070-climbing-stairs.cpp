class Solution {
    int steps(int n, vector<int> &dp){
       
        if(n==1 || n==0){
            return 1;
        }
        if (dp[n] == -1){

           int res =   (steps(n-1,dp) + steps(n-2,dp));
           dp[n]  = res;
        }
            return dp[n];
        
    }
public:
    int climbStairs(int n) {
    vector<int>dp(n+1,-1);
    int ans = steps(n,dp);
    return ans;
    }
};