#include<iostream>
using namespace std;

int main()
{
    // Input array
    int a[5] = {1, 2, 3, 4, 5};

    int i, temp;

    // Store the first element
    temp = a[0];

    // Shift all elements one position to the left
    for(i = 0; i < 4; i++)
    {
        a[i] = a[i + 1];
    }

    // Place the first element at the end
    a[4] = temp;

    // Display the rotated array
    cout << "Array after left rotation: ";
    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
