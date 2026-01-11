//Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        bool redOne=false;
        int rem;
        while(columnNumber>0){
            rem = columnNumber%26;
            if(redOne==true&&rem!=0){
                rem--;
                if(rem!=0) redOne=false;
                if(rem==0&&columnNumber!=1){
                    rem=26;
                }
            }else if(redOne==true&&rem==0){
                rem=25;
                redOne=true;
            }
            else if(rem==0){
                rem=26;
                redOne=true;
            }
            if(rem!=0)ans += (char)(rem+'A'-1);
            columnNumber/=26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//TC: O(n), SC: O(1) - auxillary space
