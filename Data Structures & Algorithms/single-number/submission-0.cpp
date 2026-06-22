class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count=0;
        for(auto value : nums){
            count^=value;
        }
        return count;
    }
};
