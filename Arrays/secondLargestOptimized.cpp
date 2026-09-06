class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
       int n= arr.size();

       int largest=-1;
       int sl = -1;

      for (int i=0;i<n;i++){
          if(arr[i]>largest) largest = arr[i];
      }

      for(int i=0;i<n;i++){
          if(arr[i]>sl && arr[i]<largest) sl = arr[i];
      }
       if(sl == largest) return -1;
       else return sl;
    }
};