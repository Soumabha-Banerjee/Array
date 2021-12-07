//The approach bellow is linear for recursive approach(divide&conquer the tournament method) checkout gfg.
#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getminmax(int n,int *a)
{
    struct Pair minmax;
    minmax.max = a[0];
    minmax.min = a[0];
    for(int i=1;i<n;i++)
    {
        if( a[i]>minmax.max )
            minmax.max = a[i];
        if( a[i]<minmax.min )
            minmax.min = a[i];
    }
    return minmax;
}

int main()
{
    struct Pair minmax;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *a;
    a = new int[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    minmax = getminmax( n, a);
    cout<<"Maximum is: "<<minmax.max<<endl;
    cout<<"Minimum is: "<<minmax.min<<endl;
    return 0;
}
