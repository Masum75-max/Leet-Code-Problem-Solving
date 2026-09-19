class Solution {
public:
    bool checkZeroOnes(string s) {
        int n=s.length();
        int globalOneMax=0;
        int localOneMax=0;
        int localZeroMax=0;
        int globalZeroMax=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
             globalZeroMax = max(localZeroMax,globalZeroMax);
             localZeroMax=0;
             localOneMax++;
            }
            else{
             globalOneMax = max(localOneMax,globalOneMax);
             localOneMax=0;
             localZeroMax++;

            }
        }

        globalZeroMax= max(localZeroMax,globalZeroMax);
        globalOneMax = max(localOneMax,globalOneMax);

        if(globalOneMax>globalZeroMax) return  true;
        else return false;
    }
};