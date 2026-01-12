#include<iostream>
using namespace std;
int main(){
    int choice;
    int count;  
    int i=0,j=0;
    int a[2];
    for(i=0;i<2;i++){
        cout<<"Enter element a["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"Matrix is:\n";
    for(i=0;i<2;i++){
        cout<<a[i]<<" ";
    }  cout<<"\n";
    int b[2];
    for(i=0;i<2;i++){
        cout<<"Enter element b["<<i<<"]:";
        cin>>b[i];
    } switch (choice)
    {
    case 1:
        cout << "Addition of matrices:\n";
        for (i = 0; i < 2; i++)
        {
            cout << a[i] + b[i] << " ";
        }
        cout << "\n";
        break;
    case 2:
        cout << "Subtraction of matrices:\n";
        for (i = 0; i < 2; i++)
        {
            cout << a[i] - b[i] << " ";
        }
        cout << "\n";
        break;
    case 3:
        cout << "Multiplication of matrices:\n";
        for (i = 0; i < 2; i++)
        {
            cout << a[i] * b[i] << " ";
        }
        cout << "\n";
        break;
    case 4:
        cout << "Transpose of matrix a:\n";
        for (i = 0; i < 2; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    default:
        break;
    }   
    return 0;
}
