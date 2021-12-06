class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int l=0;
        int h=numbers.size()-1;
        vector<int>result(2);
        int i=0;
        while(l<h)
        {
           
                if(numbers[l]+numbers[h] == target)
                {
                    result[0] = l+1;
                    result[1] = h+1;
                    break;
                }
                
            
            
            else if(numbers[h]+numbers[l]>target){
                    h--;
                }
             
            else{
                l++;
            }
        }
        return result;
    }
};