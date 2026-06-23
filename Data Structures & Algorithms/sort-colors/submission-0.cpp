class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int middle=0;
        int high=nums.size()-1;
        while(middle<=high){
            if(nums[middle]==0)swap(nums[low++],nums[middle++]);
            else if(nums[middle]==1) middle++;
            else swap(nums[middle],nums[high--]);
        }
    }
};