class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(a.size()<b.size()){
            a.push_back('0');
        }
        while(b.size()<a.size()){
            b.push_back('0');
        }
        string res="";
        int carry = 0;
        
        for(int i=0;i<a.size();i++){
            int val1 = a[i]-'0';
            int val2 = b[i]-'0';

            int total = val1 + val2 + carry;
            res += (total%2) + '0';
            carry = (total/2);
        }

        if(carry){
            res.push_back('1');
        }

        reverse (res.begin(),res.end());
        return res;
    }
};