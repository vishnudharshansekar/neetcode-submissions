class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> st;
        for(auto x : nums){
            st[x]++;
            if(st[x]>1){
                return true;
            }
        }
        return false;
        
    }
};