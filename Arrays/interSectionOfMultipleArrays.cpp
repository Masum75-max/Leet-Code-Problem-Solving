class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {

        map<int,int> m;

        for(int x : nums[0]){
            m[x] = 1;
        }

        int n = nums.size();

        for(int i = 1; i < n; i++){
            for(int x : nums[i]){
                if(m[x] == i)
                    m[x]++;
            }
        }

        vector<int> ans;

        for(auto [s, count] : m){
            if(count == n){
                ans.push_back(s);
            }
        }

        return ans;
    }
};