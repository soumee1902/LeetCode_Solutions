// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        //int bad = n-1;
        int high = n;
        int low = 1;
        int mid = low+(high-low)/2;
        
        while(low <= high)
        {
            mid = low+(high-low)/2;
            
            if(isBadVersion(mid) == true)
            {
                high = mid - 1;
                
            }
            
            else{
                low = mid + 1;
            }
        }
        
        return low;
        
    }
};