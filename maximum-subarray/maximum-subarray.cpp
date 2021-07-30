class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxx=INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i; j<nums.size(); j++)
            {
                sum+=nums[j];
                maxx = max(maxx, sum);
            }
            
            sum = 0;
        }
        
            
            return maxx;
        
    }
};