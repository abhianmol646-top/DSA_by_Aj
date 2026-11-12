// //MERGE SORT


// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(int a[],int start,int mid,int end)  //int a[]={4,5,2,7,9,6,4,4,0,1,23};
// {
//     vector<int>temp(end-start+1);   //()
//     int left=start;                //left=0
//     int right=mid+1;               //right=6
//     int index=0;                   //index=0
//                                    //mid=5
//     while(left<=mid && right<=end)    
//     {
//         if(a[left]<=a[right])     
//         {
//             temp[index]=a[left]; 
//             left++;
//             index++;
//         }
//         else{
//             temp[index]=a[right];
//             index++;
//             right++;
//         }
//     }

//     //left array isnot empty yet
//     while(left<=mid)
//     {
//       temp[index]=a[left];
//       left++;
//       index++;
//     }
//     //right array isnot empty yet
//     while(right<=end)
//     {
//         temp[index]=a[right];
//         index++;
//         right++;
//     }
//     index=0;
//     //put these values in array
//     while(start<=end)
//     {
//         a[start]=temp[index];
//         start++;
//         index++;

//     }

// }


// void mergesort(int a[], int start , int end )
// {
//     if (start >= end)
//     return;
//     int mid=start+(end-start)/2;
//     //left side
//     mergesort(a,start,mid);
//     //right side
//     mergesort(a,mid+1,end);

//     merge(a,start,mid,end);
// }
// int main()
// {
//  int a[]={4,5,2,7,9,6,4,4,0,1,23};
//  mergesort(a,0,10);
//  for(int i=0;i<11;i++)
//  {
//     cout<<a[i]<<" ";
//  }


// return 0;
// }







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























