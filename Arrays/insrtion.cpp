#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int printarray(int a[], int j)
{
    cout << "Your array is: " << endl;
    for (int i = 0; i < j; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertion(arr[], int n, int element, int capacity, int index)
{

}

int main()
{
    int a[10], i, n;
    int capacity = sizeof(a) / sizeof(a[0]);
    int element;
    int index = 2;

    cout << "Enter the size of your Array: " << endl;
    cin >> n;

    cout << "Enter element in arrays : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the size of your Array: " << endl;
    cin >> element;

    insertion(a, n, element, capacity, index);

    cout << printarray(a, 10);
}