class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0,n=0,rem=0;
        
        n=x;
        
        if(n<0)
        {
            return false;
        }
        else{
        
            while(n>0)
            {
                rem = n%10;
                rev = rev*10 + rem;
                n = n/10;
            }
            }
        
        if(x == rev)
        {
            return true;
        }
        
        else{
            return false;
        }
            
        
    }
};