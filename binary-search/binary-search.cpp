class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int high = nums.size()-1;
        int low = 0;
        int mid = high+low/2;
        ///bool flag = true;
        
        while(low<=high)
        {
            mid = high+low/2;
            
            if(nums[mid] == target)
            {
                return mid;
                
            }
            
            if(target < nums[mid])
            {
                high = mid-1;
            }
            
            else{
                low = mid+1;
            }
        }
        
         return -1;
    }
};