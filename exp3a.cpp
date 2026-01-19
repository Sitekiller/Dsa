#include <iostream>
using namespace std;
int main()
{
   int a[10];
   int n;
   cout << "enter the size of array";
   cin >> n;
   cout << endl;
   for (int i = 0; i < n; i++)
   {
      cout << "Enter the element of array of:" << i << "=";
      cin >> a[i];
      cout << endl;
   }
   int find;
   int count = 0;
   cout << "enter the element which you find";
   cin >> find;
   cout << endl;
   
   

      for (int i = 0; i < n; i++)
      {
         if (a[i] == find)
         {
            cout << "the position of element is " << i;
            count++;
          
          break;
         }
        
         
      }
   
   if (count==0)
   {
      cout << "element not present in array";
   }

   return 0;
}
