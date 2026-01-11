class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int zeroInd = 0;
        while(zeroInd<arr.size()&&arr[zeroInd]!=0){
            zeroInd++;
        }
        for(int i=zeroInd+1; i<arr.size(); i++){
            if(arr[i]!=0){
                swap(arr[i], arr[zeroInd]);
                zeroInd++;
            }
        }
    }
};

TC: O(n), SC: O(1)
