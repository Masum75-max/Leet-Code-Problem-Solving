class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n1 = arr1.size();
        int n2 = arr2.size();
        
        int i=0;
        int j=0;
        int k=0;
        
        vector<int>intersection;
        
        while(i<n1 && j<n2){
            if(arr1[i]<arr2[j]){
                i++;
            }
           else if(arr2[j]<arr1[i]){
                j++;
            }
            else{
                if(intersection.empty()){
                    intersection.push_back(arr1[i]);
                    k++;
                   
                }
                
                
                if(intersection[k-1] != arr1[i]){
                    
                    intersection.push_back(arr1[i]);
                    k++;
                    
                }
                i++;
                j++;
            }
        }
        
        return intersection;
    }
};