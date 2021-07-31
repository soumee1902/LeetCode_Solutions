class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int j=0,count=0;
        int n=digits.size();
        for(int j=n-1; j>=0; j--)
        {
            if(digits[j]==9)
            {
                digits[j] = 0;
               
            }
            else{
                digits[j]+=1;
                return digits;
            }
        }
        
        digits[0]=1;
        digits.push_back(0);
        
        return digits;
    }
};