class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> result;
        for(int i=1;i<n;i++){
            int b=n-i;
            if(helper(i) && helper(b))
            return {i,b};

        }
        return {};
        
    }
    bool helper(int a){
        while(a!=0){
            int rem=a%10;
            if(rem==0)return false;
            a=a/10;
        }
        return true;
    }
};