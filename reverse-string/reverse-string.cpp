class Solution {
public:
    void reverseString(vector<char>& s) {
        int h = s.size()-1;
        int l = 0;
        char temp;
        while(l<=h)
        {
            temp = s[l];
            s[l] = s[h];
            s[h] = temp;
            l++;
            h--;
        }
        
    }
};