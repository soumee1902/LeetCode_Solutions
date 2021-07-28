class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix="";
        int mi = INT_MAX;
        if(strs.size() == 0)
        {
            return "";
        }
        
        string sel = strs[0];
        for(int i = 1; i < strs.size(); i++)
        {
           int first=0, second=0,a=0;
                while(first < sel.size() and second < strs[i].size())
                {
                    if(sel[first] == strs[i][second])
                    {
                        a++;
                    }
                    else{
                        break;
                    }
                    first++;
                    second++;
                }
            
            mi= min(mi,a);
        }
    
    return sel.substr(0,mi);

    }
};