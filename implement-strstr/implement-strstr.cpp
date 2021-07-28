class Solution {
public:
    int strStr(string haystack, string needle) {
      
           if(needle.size() == 0)
           {
               return 0;
           }
        
            for(int i=0; i<haystack.size(); i++)
            {
               
                
                if(haystack[i] == needle[0])
                {
                    
                    int k = 0;
                    
                    while(k<needle.size())
                    {
                        if(haystack[i+k] == needle[k])
                        {
                            if(k == needle.size()-1)
                            {
                                return i;
                            }
                        }
                        
                        else{
                            break;
                        }
                        
                        k++;
                    }
                }
            }
        return -1;
    }
};