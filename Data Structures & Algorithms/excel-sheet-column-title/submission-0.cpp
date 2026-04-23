class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        while(0<columnNumber){
            columnNumber--;
            int remainder = (columnNumber) % 26;
            res+=('A'+remainder);
            columnNumber/=26;
        }
        reverse(res.begin(),res.end());
        return res;

    }
};