//Given an unsorted array, arr[] of positive numbers that contains even number of occurrences for all numbers except two numbers. 
//Return that two numbers in decreasing order which has odd occurrences.

class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        int aXorb=0;
        for(int i=0; i<arr.size(); i++){
            aXorb^=arr[i];
        }
        int diff_bit = aXorb & (~(aXorb-1));
        int a = 0, b = 0;
        for(int i=0; i<arr.size(); i++){
            if((diff_bit&arr[i])==0){
                a^=arr[i];
            }else{
                b^=arr[i];
            }
        }
        if(a>b) return {a,b};
        return {b,a};
    }
};

//TC: O(n), SC: O(1)
