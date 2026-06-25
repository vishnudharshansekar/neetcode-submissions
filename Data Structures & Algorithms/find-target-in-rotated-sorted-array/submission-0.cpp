class Solution {
public:
    int search(vector<int>& nums, int target) {
       // int m=nums[0].size();
        int n=nums.size();
        for(int i=0;i<n;i++){
            
                if(nums[i]==target){
                    return i;
                
            }
        }
        return -1;
    }
};
