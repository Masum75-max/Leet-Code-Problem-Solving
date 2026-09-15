class Solution { 
public: 
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) { 
        map<int,int> m; 
        set<int> s; 
        int n1 = nums1.size(); 
 
        for(int i = 0; i < n1; i++) { 
            if(!m[nums1[i]]) { 
                m[nums1[i]] = 1; 
            } 
        } 
 
        int n2 = nums2.size(); 
 
        for(int i = 0; i < n2; i++) { 
            if(m[nums2[i]] == 1) { 
                s.insert(nums2[i]); 
            } 
        } 
 
        return vector<int>(s.begin(), s.end()); 
    } 
};