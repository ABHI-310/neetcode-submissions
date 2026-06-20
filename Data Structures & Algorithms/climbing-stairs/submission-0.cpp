class Solution {
public:
    int t[46];

    Solution(){
        for(int i = 0; i < 46; i++){
            t[i] = 0;
        }
    }
    
    int climbStairs(int n) {
        if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        if(t[n]>0){
            return t[n];
        }
        return t[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};
