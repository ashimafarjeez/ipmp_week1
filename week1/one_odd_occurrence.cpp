//Given an array of arr[] positive integers where all numbers occur even number of times 
//except one number which occurs odd number of times. Return that number

class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        int xor_arr = 0;
        for(int a: arr){
            xor_arr^=a;
        }
        return xor_arr;
    }
};

//TC: O(n), SC: O(1)
