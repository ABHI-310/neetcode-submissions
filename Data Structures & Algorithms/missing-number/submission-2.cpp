class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        sort(nums.begin(),nums.end());
        while(i<=nums.size()){
            if(i!=nums[i]){
                return i;
            }
            i++;
        }
        return nums.size();
    }
};
