//Given an array arr[] containing 2*n + 2 positive numbers, out of which 2*n numbers exist in pairs whereas only two number occur exactly once and are distinct. 
//Find the other two numbers. Return the answer in increasing order.

class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        int aXorb = 0;
        for(int i=0; i<arr.size();i++){
            aXorb^=arr[i];
        }
        int rightmost = aXorb & (~(aXorb-1));
        int x=0,y=0;
        for(int i=0; i<arr.size(); i++){
            if((arr[i]&rightmost)==0){
                x^=arr[i];
            }else{
                y^=arr[i];
            }
        }
        if(x<y) return {x,y};
        return {y,x};
    }
};

//TC: O(n), SC: O(1)
