#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the element ";
    cin >> n;

    vector<pair<int,int>> a(n);

    for(int i = 0; i < n; i++)
    {
      cout<<i<<"-";
        cin >> a[i].first;
        a[i].second = i;
    }

    int tar;
    cout<<"enter the target ";
    cin >> tar;

    sort(a.begin(), a.end());

    int start = 0;
    int end = n - 1;

    while(start < end)
    {
        int sum = a[start].first + a[end].first;

        if(sum == tar)
        {
            cout << "Index: " 
                 << a[start].second << " & " 
                 << a[end].second;
            break;
        }
        else if(sum > tar)
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
