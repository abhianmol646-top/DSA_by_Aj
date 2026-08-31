class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,r;
        int x1=x;
        while(x>0)
        {
            r=x%10;
             if(INT_MAX/10<rev )
            {
                return false;
            }
            rev=rev*10+r;
            x=x/10;
        }
          int temp=rev;
          if(x1==temp)
          {
            return true; 
          }
          else
          {
            return false;
          }
     
    }
};