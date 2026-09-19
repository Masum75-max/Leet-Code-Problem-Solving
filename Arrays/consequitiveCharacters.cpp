class Solution {
public:
    int maxPower(string s) {
        int n  = s.length();

        int globalMax=0;
        int localMax =1;

        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                localMax++;
            }
            else{
                globalMax=max(localMax,globalMax);
                localMax=1;
            }
        }

        return max(localMax,globalMax);
        
    }
};