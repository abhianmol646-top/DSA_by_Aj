//REMOVE ELEMENT

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE RANGE OF THE ARRAY ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<i<<"-"<<"enter the data of array ";
        cin>>a[i];
    }
    int val;
    cout<<"enter the data which u want to deleted ";
    cin>>val;

      int k=0;              
      for(int i=0;i<n;i++)  
      {
        if(a[i]!=val)      
        {
            a[k]=a[i];    
            k++;         
        }
      }
    cout<<"FINAL DATA OF THE ARRAY IS ";
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    
    }   



    return 0;
}