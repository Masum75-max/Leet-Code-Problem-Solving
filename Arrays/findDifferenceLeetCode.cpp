class Solution {
public:
    char findTheDifference(string s, string t) {
         int n1= s.length();
         int n2= n1+1;
            int sum1=0;
         for(int i=0;i<n1;i++){
              sum1+= int(s[i]);
         }

             int sum2=0;
         for(int i=0;i<n2;i++){
              sum2+= int(t[i]);
         }

         return char(sum2-sum1);
    }
};