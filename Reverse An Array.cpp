#include <iostream>

using namespace std;

void display(int n,int *a)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

void reverse(int n,int *a)
{
    int start = 0;
    int end = n-1;
    while( start<end )
    {
        int temp;
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    display( n, a);
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr;
    arr = new int[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reverse( n, arr);
    return 0;
}
