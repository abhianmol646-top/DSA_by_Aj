#include <iostream>
using namespace std;
int main()
{
  int n=15;
  int t=3;
  int num=n;
  int r;
  
while(true)
{
  n=num;
  int x=1;
  while(n>0)
  {
    r=n%10;
    x=x*r;
    n=n/10;
  }
   if(x%t==0)
   {
    cout<<num;
    break;
   }
   else
   {
    num++;
   }
}



    return 0;
}