#include <iostream>
using namespace std;
int main()
{
    //0 2 0 3 12
    int n;
    cout<<"enter the range of the array ";
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

                                        // 2 1
     if(n<2)
     {
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
     }else
     {
      
      int start=0;                 
      int end=1;
    

      while(end<n && start<n)                        
      {
        if(nums[start]!=0)             
        {
            start++;
            end++;
        }
        else
        {   
            if(nums[end]!=0)        
            {
            swap(nums[start],nums[end]);
            start++;
            end++;
            }
            else
            {
                end++;
            }
        }
       
        }
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
    
    }
 return 0;
}