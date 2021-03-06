#include<iostream>
#include<climits>
using namespace std;

// Maximum subarray sum program
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    for(int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if( max_so_far < max_ending_here )
            max_so_far = max_ending_here;
        if( max_ending_here < 0 )
            max_ending_here = 0;
    }
    return max_so_far;
}

// Driver program
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum( a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}

/*
About(Kadane's Algorithm):
    The above algorithm is called Kadane’s Algorithm
    The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of 
    the array (max_ending_here is used for this). And keep track of 
    maximum sum contiguous segment among all positive segments (max_so_far is used for this). 
    Each time we get a positive-sum compare it with max_so_far and update max_so_far if it is greater than max_so_far 
    
    Kadane’s Algorithm can be viewed both as a greedy and DP. As we can see that we are 
    keeping a running sum of integers and when it becomes less than 0, we reset it to 0 (Greedy Part). 
    This is because continuing with a negative sum is way more worse than restarting with a new range. 
    Now it can also be viewed as a DP, at each stage we have 2 choices: Either take the current element and 
    continue with previous sum OR restart a new range. These both choices are being taken care of in the implementation.


Another Approach(Core DP):
        #include<iostream>
        using namespace std;
         
        int maxSubArraySum(int a[], int size)
        {
           int max_so_far = a[0];
           int curr_max = a[0];
         
           for (int i = 1; i < size; i++)
           {
                curr_max = max(a[i], curr_max+a[i]);
                max_so_far = max(max_so_far, curr_max);
           }
           return max_so_far;
        }
        
        int main()
        {
           int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3};
           int n = sizeof(a)/sizeof(a[0]);
           int max_sum = maxSubArraySum(a, n);
           cout << "Maximum contiguous sum is " << max_sum;
           return 0;
        }
    This is a core dynamic programming approach a little advanced approach. The algorithm concept is smiler
    with the above implemented approach. The implementation handles the case when all numbers in the array are negative.


Time Complexity:   
    Both the programme take O(n) time.

Space Complexity: 
    Both the programme take O(1) space.
*/
