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
        cout<<i<<"-"<<"enter the data of the array ";
        cin>>a[i];
    }

        int sumfinal=((n+1)*n)/2;
        int suminitial=0;

        for(int i=0;i<n;i++)
        {
            suminitial+=a[i];
        }

        cout<<"The Missing number of this array is "<<sumfinal-suminitial<<endl;




    return 0;
}