class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      
        int high = nums.size()-1;
        int low = 0;
        int mid = low+(high - low)/2;
        
        while(low <= high)
        {
            mid =  low+(high - low)/2;
            
            if(target > nums[mid])
            {
                low = mid+1;
            }
            
            if(target < nums[mid])
            {
                high = mid - 1;
            }
            
            else{
                if(target == nums[mid])
                {
                    return mid;
                }
            }
        }
        
        return high+1;
    }
};