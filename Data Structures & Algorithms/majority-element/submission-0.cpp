class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int majority=0;
        for(auto x : nums){
            if(cnt==0){
                majority=x;
            }
            if(x==majority){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return majority;

    }
};