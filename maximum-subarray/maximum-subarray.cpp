class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxx=INT_MIN;
        int i=0,j=0;
        while(i < nums.size())
        {
            j=i;
            while(j < nums.size())
            {
                sum+=nums[j];
                maxx = max(maxx, sum);
                j++;
            }
            
            sum = 0;
            i++;
        }
        
            
            return maxx;
        
    }
};