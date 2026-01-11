//You're given a read-only array of N integers. Find out if any integer occurs more than N/3 times in the array.
//If so, return the integer. If not, return -1.

int Solution::repeatedNumber(const vector<int> &a) {
    int ele1=INT_MIN, ele2=INT_MIN, cnt1=0, cnt2=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]==ele1){
            cnt1++;
        }else if(a[i]==ele2){
            cnt2++;
        }else if(cnt1==0){
            ele1=a[i];
            cnt1=1;
        }else if(cnt2==0){
            ele2=a[i];
            cnt2=1;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=cnt2=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]==ele1){
            cnt1++;
            if(cnt1>a.size()/3) return ele1;
        }else if(a[i]==ele2){
            cnt2++;
            if(cnt2>a.size()/3) return ele2;
        }
    }
    return -1;
}

//TC: O(n), SC: O(1)
