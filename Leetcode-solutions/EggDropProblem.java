class Solution {
    
    public int twoEggDrop(int n) {
        int dp[]=new int[n+1];
        Arrays.fill(dp,-1);  
        return twoEgg(n,dp);
    }
    
    public int twoEgg(int n,int[] dp)
    {
        if(n==0)
        {
            dp[n]=0;
            return 0;   
        }
        int j,val1,val2,minVal=Integer.MAX_VALUE;    
        for(j=1;j<=n;j++)
        {
            val1= j-1; // egg breaks  
            val2 = (dp[n-j]==-1)?twoEgg(n-j,dp):dp[n-j]; // egg survives
            if((1+Math.max(val1,val2))<minVal)
                minVal=(1+Math.max(val1,val2));
        }    
        dp[n]=minVal;
        return dp[n];
    }
}