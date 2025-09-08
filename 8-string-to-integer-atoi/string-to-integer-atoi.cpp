class Solution {
public:
    int myAtoi(string s) {
        int i = 0;

      
        while(i < s.size() && s[i] == ' ') i++;

      
        int sign = 1;
        if(i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        return helper(s, i, sign, 0);
    }

private:
    int helper(string &s, int i, int sign, long num) {
        if(i >= s.size() || !isdigit(s[i])) {
            return (int)(num * sign);
        }

        int digit = s[i] - '0';

     
        if(num > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        return helper(s, i+1, sign, num * 10 + digit);
    }
};
