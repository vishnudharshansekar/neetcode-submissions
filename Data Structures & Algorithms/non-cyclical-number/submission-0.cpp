class Solution {
public:
    int sumofsquares(int n){
        int sum=0;
        while(n>0){
            sum=sum+(int)pow(n%10,2);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=sumofsquares(n);
        int fast=sumofsquares(sumofsquares(n));
        while(slow!=fast){
            slow=sumofsquares(slow);
            fast=sumofsquares(sumofsquares(fast));
        }
        return slow==1;
        
    }
};
