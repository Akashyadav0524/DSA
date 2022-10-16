#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int getMax(int arr[],int n)
// {
//     int max= INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }

// int getMin(int arr[],int n)
// {
//     int min= INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     return min;
// }
//linear serch
bool serch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
         true;
        }
    }
    false;
}

int printarray(int a[], int j)
{
    cout << "Your array is: " << endl;
    for (int i = 0; i < j; i++)
    {
        cout << a[i] << endl;
    }
    cout<<endl;
}

int main()
{
    int a[5], i, j, key;

    cout << "Enter the size of your Array: " << endl;
    cin >> j;

    cout << "Enter element in arrays : " << endl;
    for (int i = 0; i < j; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to serch in  arrays : " << endl;
    cin >> key;
    cout<< printarray(a, 5);
    bool found = serch(a, 5, key);
    {
        if (found)
        {
            cout<<"Array is present " << endl;
        }
        else
            cout << "array is absent " << endl;
    }


    // cout<<"your array at place 4 : "<<a[4]<<endl;

    // cout<<"maximum element : "<<getMax(a,j)<<endl;
    // cout<<"minimum element : "<<getMin(a,j)<<endl;
}
