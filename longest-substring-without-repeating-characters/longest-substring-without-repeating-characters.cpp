class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int end=0, start=0, cl=0, ml=0, curr=0,ins=1, res=0;
        
        unordered_map <char, int> m;
        while (end<s.size())
        {
            char curr = s[end];
            
            if(m.find(curr) == m.end())
            {
                
                m.insert({s[end], ins});
                ins++;
                end++;
                cl = end - start;
            }
            else{
                if(ml < cl)
                {
                    ml=cl;
                }
                while(end < s.size() && start <= end)
                {
                    char rem = s[start];
                    if(s[start] != s[end])
                    {
                    m.erase(s[start]);
                        start++;
                    }
                    else{
                        start++;
                        end++;
                        break;
                        }
                
                }
        
            }
                
        }
            
        if(ml < cl)
        {
            ml = cl;
        }
        
        if(ml == -1)
        {
            ml = s.size();
        }
        
        return ml;
        }
        
    
};

