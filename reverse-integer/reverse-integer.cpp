class Solution {
public:
    int reverse(int x) {
        int rem=0;
        long int rev=0, n=0;
        
        if(x>INT_MAX ||  x<INT_MIN)
        {
            return 0;
        }
            
            n=abs(x);
        if(x==0)
        {
            return 0;
        }
        
        
            while(n>0)
            {
                
                    rem = n%10;
                    if(rem>=0)
                    {
                        rev=rev*10+rem;
                    }
                    n=n/10;
                
        
            }
        
        if(rev > INT_MAX || rev < INT_MIN)
        {
            return 0;
        }
          
            else if(x<0)
            {
                return -rev;
            }
            else{
                return rev;
            }  
    
        
        
    }
};