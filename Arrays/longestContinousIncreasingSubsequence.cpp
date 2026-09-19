class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int globalMax =0;
        int localMax =1;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
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