class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &row : matrix){
            for(int value : row){
                if(value==target){
                    return true;
                }
            }
        }
        return false;
    }
};
