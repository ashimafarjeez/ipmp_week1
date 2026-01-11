//Array of integers of size n. Has numbers from 1 to n. A occurs twice, B is missing. return {A,B}

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int aXorb = 0;
    for(int i=0; i<A.size(); i++){
        aXorb^=A[i];
        aXorb^=(i+1);
    }
    int diff_bit = aXorb & (~(aXorb-1));
    int x = 0, y = 0;
    for(int i=0; i<A.size(); i++){
        if((diff_bit&A[i])==0){
            x^=A[i];
        }else{
            y^=A[i];
        }
        if(((i+1)&diff_bit)==0){
            x^=(i+1);
        }else{
            y^=(i+1);
        }
    }
    for(int i=0; i<A.size(); i++){
        if(A[i]==x){
            return {x,y};
        }else if(A[i]==y){
            return {y,x};
        }
    }
}

//TC: O(n), SC: O(1)
