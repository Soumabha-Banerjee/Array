#include <bits/stdc++.h>
using namespace std;

int doIntersection(int a[], int n, int b[], int m)  
{
        int i = 0, j = 0, count = 0;
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                i++;
            }
      
            else if (b[j] < a[i]) {
                j++;
            }
      
            else {
                //cout << a[j++] << " ";
                j++;
                count++;
                i++;
            }
        }
      
        /* Remaining elements of the larger array but this is not needed for this programme */
        while (i < n) {
            i++;
        }
      
        while (j < m) {
            j++;
        }
        return count;
}

int main()
{
    int arr1[] = { 1, 2, 2, 2, 3 };
    int arr2[] = { 2, 3, 4, 5 };
    
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
  
    // Function calling
    cout << doIntersection(arr1, m, arr2, n);
  
    return 0;
}

// Time Complexity: O(m+n). 
