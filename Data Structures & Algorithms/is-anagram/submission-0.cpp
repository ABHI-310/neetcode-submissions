class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);
        for(auto c:s){
            freq[c-'a']++;
        }
        for(auto g:t){
            freq[g-'a']--;
        }
        for(int ele:freq){
            if(ele!=0){
                return false;
            }
        }
        return true;
    }
};
