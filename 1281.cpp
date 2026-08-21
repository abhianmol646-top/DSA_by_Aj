class Solution {
public:
    int subtractProductAndSum(int n) 
{
   int pro=1,r;
   int x=n;
     while(n!=0)
      {
       r=n% 10;      
       pro=pro*r;      
       n=n/10;         
      }
   int sum=0;
   int r1;
      while(x!=0)
      {
       r1=x%10;       
       sum=sum+r1;    
       x=x/10;        
      }
   int ans;
   ans=pro-sum;
   
   return ans; 
    }
};