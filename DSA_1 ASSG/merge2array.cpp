#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    int arr[n];
    int arr1[n], arr2[n], merged[n * 2];

    // Input for the first array
    cout << "Enter elements for the first array (in descending order): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // Input for the second array
    cout << "Enter elements for the second array (in descending order): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    // Merging the arrays in descending order
    int i = 0, j = 0, k = 0;
    while (i < n && j < n)
    {
        if (arr1[i] >= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        merged[k++] = arr1[i++];
    }
    while (j < n)
    {
        merged[k++] = arr2[j++];
    }

    // Printing the merged array
    cout << "Merged array in descending order: ";
    for (int i = 0; i < n * 2; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
