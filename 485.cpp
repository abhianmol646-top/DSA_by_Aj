#include <iostream>
using namespace std;
int main()
{
   int count = 0;
   int n = 0;
   int range;
   cout << "enter the range of array " << " ";
   cin >> range;

   int a[range];
   for (int i = 0; i < range; i++)
   {
      cout << i << "-" << "enter the data of array" << " ";
      cin >> a[i];
   }
   for (int i = 0; i < range; i++)
   {
      if (a[i] == 1)
      {
         count++;
      }
      else
      {
         n = count;
         count = 0;
      }
      if (count > n)
      {
         n = count;
      }
   }
   cout << n;

   return 0;
}