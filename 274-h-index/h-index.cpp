class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(),citations.rend());
        int result=0;
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=i+1){
                result=i+1;
            }
        }
        return result;
        
    }
};