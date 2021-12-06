class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
       int l=0;
       int high = nums.size()-1;
       vector<int> result(nums.size());
    
        for(int i = k%nums.size()-1; i>=0; i--)
        {
            result[i] = nums[high];
            high--;
        }
        
        for(int j = k%nums.size(); j < nums.size(); j++)
        {
            result[j] = nums[l];
            l++;
        }
        
        
          
               nums = result;
       
        
    }
};