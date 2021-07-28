class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int j=0, count=0;
        int pre = 0;
        if(nums.size() == 0)
        {
            count = NULL;
        }
        else{
        count=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[j] != nums[i])
            {
                nums[++j] = nums[i];
                count++;
                //pre = nums[i];
                
            }
        }
        }
        return count;

    }
};