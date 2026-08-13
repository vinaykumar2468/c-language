#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Create an empty vector
    vector<int> a;

    int n, value, i;

    // Take the size of the vector
    cout << "Enter Size: ";
    cin >> n;

    // Take elements from the user
    for(i = 0; i < n; i++)
    {
        cin >> value;

        // Add each element to the end of the vector
        a.push_back(value);
    }

    // Display all vector elements
    cout << "Vector elements: ";

    for(i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    // Access the last element
    cout << "\nLast element: " << a.back();

    // Access the first element
    cout << "\nFirst element: " << a.front();

    return 0;
}
