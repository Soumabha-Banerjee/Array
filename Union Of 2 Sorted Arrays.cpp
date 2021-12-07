#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  
{
        int i = 0, j = 0, count = 0;
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                //cout << a[i++] << " ";
                i++;
                count++;
            }
      
            else if (b[j] < a[i]) {
                //cout << a[j++] << " ";
                j++;
                count++;
            }
      
            else {
                //cout << a[j++] << " ";
                j++;
                count++;
                i++;
            }
        }
      
        /* Print remaining elements of the larger array */
        while (i < n) {
            //cout << arr1[i++] << " ";
            i++;
            count++;
        }
      
        while (j < m) {
            //cout << arr2[j++] << " ";
            j++;
            count++;
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
    cout << doUnion(arr1, m, arr2, n);
  
    return 0;
}

// Time Complexity: O(m+n). 
