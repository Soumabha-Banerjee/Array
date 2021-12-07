#include <iostream>

using namespace std;

// Function to sort the array of 0 1 2
void sort012(int arr[], int arr_size)
{
    int low = 0;
    int mid = 0;
    int high = arr_size - 1;
    while( mid<=high ) 
    {
        switch( arr[mid] ) 
        {
            // If element is 0
            case 0:
                swap( arr[low++], arr[mid++]);
                break;
            // If element is 1
            case 1:
                mid++;
                break;
            // If element is 2
            case 2:
                swap( arr[high--], arr[mid]);
                break;
        }
    }
}

// Function to print array arr[]
void printArray(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}
 
// Driver Code
int main()
{
    // Taking the array made with 0, 1 & 2
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // Calling the sorting function
    sort012(arr, n);
    // Printing the output
    cout << "array after segregation ";
    printArray(arr, n);
 
    return 0;
}


// Another Simple approach algorithm:
// 1. Keep three counter c0 to count 0s, c1 to count 1s and c2 to count 2s.
// 2. Traverse through the array and increase the count of c0 if the element is 0,increase the count of c1 if the element is 1 and increase the count of c2 if the element is 2.
// 3. Now again traverse the array and replace first c0 elements with 0, next c1 elements with 1 and next c2 elements with 2.
// This is the easieast approach so this is not implemented here for imolimentation check gfg.

// Time Complexity:
// Both the programme takes O(n) time.

// Space Complexity:
// Both the programme takes O(1) space.

// Check out a similer problrm: Dutch national flag Problem
