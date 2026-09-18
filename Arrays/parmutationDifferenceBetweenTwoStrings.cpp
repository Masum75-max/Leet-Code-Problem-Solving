class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n = s.size();

        int pos[26];

        for(int i=0;i<n;i++){
         
          pos[s[i]-'a']=i;

        }
         
         int sum =0;
        for(int i=0;i<n;i++){
         
        sum+= abs(i- pos[t[i]-'a']);

        }

        return sum;
       
    }
};