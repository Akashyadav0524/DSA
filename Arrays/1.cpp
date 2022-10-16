#include <iostream>
using namespace std;

int main()
{
    int a[10], i, j;

    cout << "Enter the size of your Array: " << endl;
    cin >> j;

    cout << "Enter element in arrays : " << endl;
    for (int i = 0; i <= j; i++)
    {
        cin >> a[i];
    }
    cout << "Your array is: " << endl;
    for (int i = 1; i <= j; i++)
    {
        cout << a[i] << endl;
    }

    cout<<"your array at place 4 : "<<a[4];
    return 0;
}
