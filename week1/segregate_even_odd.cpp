//Given an array arr, write a program segregating even and odd numbers. The program should put all even numbers first in sorted order, and then odd numbers in sorted order.

class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        int e = 0, o = arr.size()-1;
        while(e<o){
            while(e<o&&(arr[e]&1)==0) e++;
            while(o>e&&(arr[o]&1)!=0) o--;
            if(e<o){
                swap(arr[e], arr[o]);
            }
        }
        sort(arr.begin(), arr.begin()+e);
        sort(arr.begin()+e, arr.end());
    }
};

//TC: O(nlogn), SC: O(1)
//nlogn + n (sorting and one pass through the array)
