#include <iostream>
using namespace std;
int main()
{
    // data should be shorted maner you need data accending or decending

    int n;
    
    cout << "enter the size of array";
    cin >> n;
    cout << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of array of:" << i << "=";
        cin >> a[i];
        cout << endl;
    }
    int find;

    cout << "enter the element which you find";
    cin >> find;
    cout << endl;
    int low = 0;
    int upper = n - 1;
    int mid;
    while (low <= upper)
    {
        mid = (low + upper) / 2;
        if (a[mid] == find)
        {
            cout << "the position of element is :" << mid;
            return 0;
        }
        else if (a[mid] < find)
        {
            low = mid + 1;
        }
        else
        {
            upper = mid - 1;
        }
    }

    cout << "element not present";

    return 0;
}
