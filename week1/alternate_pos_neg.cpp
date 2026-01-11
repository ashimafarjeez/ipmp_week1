//Given an unsorted array arr containing both positive and negative numbers. 
//Your task is to rearrange the array and convert it into an array of alternate positive and negative numbers without changing the relative order.

class Solution {
  public:
    void rearrange(vector<int> &arr) {
        vector<int>pos, neg;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>=0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        int i=0, ind =  0;
        while(i<pos.size()&&i<neg.size()){
            arr[ind++]=pos[i];
            arr[ind++]=neg[i];
            i++;
        }
        while(i<pos.size()){
            arr[ind++]=pos[i++];
        }
        while(i<neg.size()){
            arr[ind++]=neg[i++];
        }
    }
};

//TC: O(n), SC: O(n)
