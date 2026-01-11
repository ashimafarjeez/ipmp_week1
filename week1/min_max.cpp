class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int minimum = INT_MAX, maximum = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            minimum = min(minimum, arr[i]);
            maximum = max(maximum, arr[i]);
        }
        return {minimum, maximum};
    }
};

//TC: O(N), SC: O(1)
