class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        for(int i=0; i<n/2; i++){
            swap(arr[i], arr[n-i-1]);
        }
    }
};

//TC: O(n), SC: O(1)
