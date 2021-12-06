class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
         int low = 0;
        int high = nums.size()-1;
        int k=0;
        int j=0;
        int l=0;
        vector<int>result(nums.size());
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                result[low++] = nums[i];
                l=low;
            }
            else{
                k++;
            }
        }
        
        
        for(int i=l; i<nums.size(); i++)
        {
            result[i] = 0;
        }
        
        nums = result;
    }
};
