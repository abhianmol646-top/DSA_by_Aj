#include <iostream>
#include <vector>
using namespace std;
void mergesort(int a[],int start,int mid,int end)
{
    int left=start;
    int right=mid+1;
    int index=0;
    vector<int>temp(end-start+1);

    while(left<=mid && right<=end)
    {
        if(a[left]<=a[right])
        {
            temp[index]=a[left];
            index++;
            left++;
        }
        else
        {
            temp[index]=a[right];
            index++;
            right++;
        }
    }
        while(left<=mid)
        {
            temp[index]=a[left];
            left++;
            index++;
        }
        while(right<=end)
        {
            temp[index]=a[right];
            index++;
            right++;
        }
        index=0;
        while(start<=end)
        {
          a[start]=temp[index];
          index++;
          start++;
        }
    
}

void merge(int a[],int start,int end)
{
    if(start>=end)
    return;

    int mid=start+(end-start)/2;

    merge(a,start,mid);
    merge(a,mid+1,end);

    mergesort(a,start,mid,end);
}




int main()
{
  int a[]={50,83,2,494,3938,3,10,91};
  merge(a,0,7);
  for(int i=0;i<8;i++)
  {
    cout<<a[i]<<" ";
  }

    return 0;
}























