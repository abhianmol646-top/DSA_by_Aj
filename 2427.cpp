class Solution {
public:
    int commonFactors(int a, int b) 
    {
      int count=0;
      int num;
      if(a>b)
      {
        num=a;
      }
      else if(a==b)
      {
        num=a;
      }
      else
      {
        num=b;
      }
      for(int i=1;i<=num;i++)
      {
       if(a%i==0 && b%i==0)
        {
            count++;
        }
      } 
      return count;   
    }
};