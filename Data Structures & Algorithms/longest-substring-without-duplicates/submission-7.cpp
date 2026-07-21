class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int maxlen=0;
        vector<int> hash(128,-1);
        
        for(int r=0;r<s.size();++r){
            int c=s[r];
            if(hash[c]>=l){
                l=hash[c]+1;
            }
                hash[c]=r;




                if(r-l+1>maxlen)
                    maxlen=r-l+1; 
                
            
        }
        return maxlen;
    }
};
