class Solution {
public:

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int tsum =0;
        for(int i = 0; i<n;i++)
            tsum += nums[i];
    
        int k = tsum/2;
        if(tsum%2 ==1) return false;
        vector<vector<int>>dp(n,vector<int>(k+1,false));
        for(int i =0;i<n;i++){
            dp[i][0] = true;
        }
        if(nums[0] <= k)
            dp[0][nums[0]] = true;
        
        for(int  i=1;i<n;i++){
            for(int tar = 1; tar<=k;tar++){
                bool nt = dp[i-1][tar];
                bool t = false;
                if(nums[i]<= tar)
                    t = dp[i-1][tar-nums[i]];
                dp[i][tar] = nt||t;
            }
        }
        return dp[n-1][k];
    }
};