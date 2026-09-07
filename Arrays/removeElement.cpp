class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();
        int j = n - 1;

        while (j >= 0 && nums[j] == val) {
            j--;
        }

        for (int i = 0; i <= j; i++) {

            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                j--;

                while (j >= 0 && nums[j] == val) {
                    j--;
                }
            }
        }

        return j + 1;
    }
};