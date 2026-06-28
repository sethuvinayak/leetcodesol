class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,k=0;
        while(j<s.size() && k<t.size()){
            if(s[j]==t[k]){
                j++;
                k++;
            }
            else
            k++;
            
        }
        return j==s.size();
    }
};