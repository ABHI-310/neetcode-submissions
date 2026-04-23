class Solution {
public:
    int hammingWeight(uint32_t n) {
        int mask = 1;
        int count = 0;
        while(mask!=0){
            if((mask&n) != 0){
                count++;
            }
            mask = mask <<1;
        }

        return count;

    }
};
