int Solution::firstMissingPositive(vector<int> &A) {
    for(int i=0; i<A.size(); i++){
        if(A[i]<=0){
            A[i]=A.size()+1; //make negatives redundant
        }
    }
    for(int i=0; i<A.size(); i++){
        int ind = abs(A[i])-1; //if 1 was found, mark index 0, etc
        if(ind<A.size()){
            A[ind]=-abs(A[ind]);
        }
    }
    for(int i=0;i<A.size();i++){
        if(A[i]>0){
            return i+1; //if particular ind is unmarked, i+1 did not occur in the array 
        }
    }
    return A.size()+1;
}
//ans can only be in the range 1 to n+1. So we use the array itself to mark occurrences.
//TC: O(n), SC: O(1)
