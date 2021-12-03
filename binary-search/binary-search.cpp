class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        int mid = (high + low)/2;
        bool flag = false;
        while(low <= high)
        {
            mid = (high + low)/2;
           
            if(target > nums[mid])
            {
                low = mid+1;
            }
            
            else if(target < nums[mid])
            {
                high = mid - 1;
            }
            
            else{
                if(nums[mid] == target)
                {
                    flag = true;
                    return mid;
                    
                }
                else{
                    return -1;
                }
                
                
            }
        }
        if(flag == false)
        {
            return -1;
        }
        else
         return mid;
    }
};