class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int missing=1;
        sort(nums.begin(),nums.end());
        for(int x : nums){
            if(x==missing){
                missing++;
            }
        }
        return missing;
    }
};