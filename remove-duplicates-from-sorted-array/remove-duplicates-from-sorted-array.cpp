class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int j=0, count;
        if(nums.size() == 0)
        {
            count = NULL;
        }
        else{
        count=1;
            int i=1;
        while(i<nums.size()) 
        {
            if(nums[j] != nums[i])
            {
                nums[++j] = nums[i];
                count++;
                //pre = nums[i];
                
            }
            i++;
        }
        }
        return count;

    }
};