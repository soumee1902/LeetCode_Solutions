class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0; bool flag;
        
        if(s == " ")
        {
            return 0;
        }
        else{
        for(int i=0; i<s.length(); i++)
        {
            
            if(s[i] == ' ')
            {
                flag = 0;
            }
            else{
                if (flag == 0)
                {
                     count =0;
                }
                count++;
                flag = 1;
            }
        }
        }
            
            
                
       
        return count;
    }
};