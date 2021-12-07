#include <iostream>

using namespace std;

void rearrange(int arr[], int n) 
{
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if( arr[i] < 0 )
        {
            if( i != j )
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

// A utility function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
// Driver code
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}


// Another simple approach algorithm (Two Pointer Approach):
// 1. Check If the left and right pointer elements are negative then simply increment the left pointer.
// 2. Otherwise, if the left element is positive and the right element is negative then simply swap the elements, and simultaneously increment and decrement the left and right pointers.
// 3. Else if the left element is positive and the right element is also positive then simply decrement the right pointer.
// 4. Repeat the above 3 steps until the left pointer <= right pointer.

// Time Complexity:
// Both the programme takes O(n) time.

// Space Complexity:
// Both the programme takes O(1) space.

// Note: Here for arranging we didn't maintain any order. The problem becomes difficult if we need to maintain the order of elements. In this case we have to use any sorting algoritm because there is no other option then the time complexity can't be O(n).  
