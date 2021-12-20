class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int high = nums.size()-1;
        int low = 0;
        int mid = low+(high-low)/2;
        //bool  flag = false;
        
        while(low <= high)
        {
            mid = low + (high - low)/2;
            
            if(nums[mid] < target)
            {
                low = mid+1;
            }
            
            if(nums[mid] > target)
            {
                high = mid-1;
            }
            
            if(nums[mid] == target)
            {
               /// flag = true;
                return mid;
            }
            
        }
        
       
        
        return high+1;
        
        
    }
};