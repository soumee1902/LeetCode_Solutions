class Solution {
public:
    string reverseWords(string s) {
        
        int l=0;
        int h = s.size()-1;
        int r;
        int str=0;
        char temp;
        
      
           for(int i=0; i<=h; i++)
           {
               
               
           if(s[i] == ' ' || i == h)
            {
                str = i;
                r = i-1;
               if(i == h)
               {
                   r = i;
               }
               while(l<=r){
                   
                        temp = s[l];
                        s[l] = s[r];
                        s[r] = temp;
                        l++;
                        r--;
                    }
                l = str+1;
                }
              
            }
          
        return s;
    
    }
};