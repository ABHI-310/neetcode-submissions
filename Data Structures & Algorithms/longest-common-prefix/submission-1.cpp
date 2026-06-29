class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int m = strs.size();
        int n = min(strs[0].size(),strs[m-1].size());
        int count = 0;
        for(int i=0;i<n;i++){
            if(strs[0][i]==strs[m-1][i]){
                count++;
            }
            else{
                break;
            }
        }
        string res="";
        for(int i=0;i<count;i++){
            res+=strs[0][i];
        }
        return res;
    }
};