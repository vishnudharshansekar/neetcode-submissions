class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int maxi=0;
        for(int i=0;i<prices.size();i++){
            int cost=prices[i]-minimum;
            maxi=max(maxi,cost);
            minimum=min(minimum,prices[i]);
        }
        return maxi;
    }
};
