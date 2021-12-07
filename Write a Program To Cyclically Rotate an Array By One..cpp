#include <iostream>
using namespace std;

// Rotation code
void rotate(int arr[], int n)
{
    int x = arr[n-1];
    for(int i = n; i > 0; i--)
        arr[i] = arr[i-1];
    arr[0] = x;
}

// Driver code
int main()
{
	// Taking input array
	int n;
	cout << "Enter the size of array: ";
	cin >> n;
	int arr[n];
	cout << "Enter the array elements: \n";
	for(int i = 0; i < n; i++)
	    cin >> arr[i];
    // Printing the array
	cout << "Given array is \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
    // Calling the rotation function
	rotate(arr, n);
    // Printing the rotated array
	cout << "\nRotated array is\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	return 0;
}

/*
The above is the simpliest approach

Another approach (Two Pointer Method):
    We can use two pointers, say i and j which point to first and last element 
    of array respectively. As we know in cyclic rotation we will bring last element 
    to first and shift rest in forward direction, so start swaping arr[i] and arr[j] 
    and keep j fixed and i moving towards j.  Repeat till i is not equal to j.
    Code:  
    void rotate(int arr[], int n)
    {
        int i = 0, j = n-1; // i and j pointing to first and last element respectively
          while(i != j){
          swap(arr[i], arr[j]);
          i++;
        }
    }


Time Compleity:
    Both the programme takes O(n) time.

Space Compleity:
    Both the programme takes O(1) space.
*/