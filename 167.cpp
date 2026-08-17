#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cout<<i<<"-";
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target ";
    cin>>target;

      int start=0;
      int end=n-1;

      while(start<end)
      {
        if(nums[start]+nums[end]==target)
        {
            cout<<start+1<<"&"<<end+1;
            break;
        }
        else if(nums[start]+nums[end]>target)
        {
            end--;
        }
        else
        {
            start++;
        }
      }






    return 0;
}