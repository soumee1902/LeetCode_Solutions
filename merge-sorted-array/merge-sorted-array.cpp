class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int t=nums1.size()-1;
    
        while(i>=0 && j>=0)
        {
        
            if(nums1[i] > nums2[j])
            {
                nums1[t--] = nums1[i];
                i--;
            }
            
            else{    
                    nums1[t--] = nums2[j];
                    j--;
                }
        }
        
            while(i >=0)
            {
                nums1[t--] = nums1[i--];
            }
        
            while(j >= 0)
            {
                nums1[t--] = nums2[j--];
            }
                
            
        }
        
    };

        

