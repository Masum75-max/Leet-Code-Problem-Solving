class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int globalMax=0;
        int n= nums.size();
        int localMax =0;
        for(int i=0;i<n;i++){

            if(nums[i]==1){
               localMax++;
            }
            else{
                globalMax=  max(localMax,globalMax);
                localMax =0;
            }
        }

        return max(globalMax,localMax);
        
    }
};