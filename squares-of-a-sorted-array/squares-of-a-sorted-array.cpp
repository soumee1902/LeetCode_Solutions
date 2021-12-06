class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int l = 0;
        int h = nums.size()-1;
        int m = h;
        vector<int> result(nums.size(),0);
        
        while(l < h)
        {
            if(abs(nums[l]) <= abs(nums[h]))
            {
                result[m--] = nums[h]*nums[h];
                h--;
            }
            
            else{
                result[m--] = nums[l]*nums[l];
                l++;
            }
        }
        
        if(l == h)
        {
            result[m] = nums[l]*nums[l];
            
        }
        
        return result;
        
    }
};