//You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). 
//This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int ele = 0;
        for(int i=0; i<arr.size(); i++){
            ele^=arr[i];
        }
        int n = arr.size()+1;
        for(int i=1; i<=n; i++){
            ele^=i;
        }
        return ele;
    }
};

//TC: O(n), SC: O(1)
