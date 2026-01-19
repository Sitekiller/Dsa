//operactions of matrix

#include <iostream>
using namespace std;
int main()
{   int choice;
    int count;
    
    int i = 0, j = 0;
    int a[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "Enter element a[" << i << "][" << j << "]:";
            cin >> a[i][j];
        }
    }
    cout << "Matrix is:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    int b[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "Enter element b[" << i << "][" << j << "]:";
            cin >> b[i][j];
        }
    }
    cout << "Matrix b is:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\nEnter your choice ";
    cin>>choice;
    do
    { 
       
    
    switch (choice)
    {
    case 1:
        cout << "Addition of matrices:\n";
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                cout << a[i][j] + b[i][j] << " ";
            }
            cout << "\n";
        }
        break;
    case 2:
        cout << "Subtraction of matrices:\n";
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                cout << a[i][j] - b[i][j] << " ";
            }
            cout << "\n";
        }
        break;
    case 3:
        cout << "Multiplication of matrices:\n";
        int c[2][2];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                c[i][j] = a[i][j] * b[j][i];
                cout << c[i][j] << " ";
            }
            cout << "\n";
        }
        break;
    case 4:
        cout << "Transpose of matrix a:\n";    
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                cout << a[j][i] << " ";
            }
            cout << "\n";
        }
    default:
        break;
    } cout<<"Do you want to continue? (1/0): ";
        cin>>count;
        if(count==0)
        {
            break;
        }
        cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\nEnter your choice ";
        cin>>choice;
    } 
    while (count==1);

    return 0;
}
