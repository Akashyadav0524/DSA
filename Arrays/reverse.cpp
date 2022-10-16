
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
   
}

int printarray(int a[], int j)
{
    cout << "Your array is: " << endl;
    for (int i = 0; i < j; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[10], i, j, key;

    cout << "Enter the size of your Array: " << endl;
    cin >> j;

    cout << "Enter element in arrays : " << endl;
    for (int i = 0; i < j; i++)
    {
        cin >> a[i];
    }
    cout << "your array before reversing" << endl;
    cout << printarray(a, 3);

    cout<<"*************************************************"<<endl;    
    cout << "your array after reversing" << endl;
    cout<<reverse(a,3);
    cout << printarray(a, 3);

  
}
