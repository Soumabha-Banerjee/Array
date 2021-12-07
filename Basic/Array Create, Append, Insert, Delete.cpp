#include <iostream>

using namespace std;

struct Array
{
    int *a;
    int length;
    int size;
};

int del(struct Array *arr)
{
    int pos,n;
    if( arr->length<=0 )
    {
        cout<<"The array is empty"<<endl;
        return 0;
    }
    else
    {
        cout<<"Enter the position: ";
        cin>>pos;
        if( pos>=0 && pos<arr->length )
        {
            n = arr->a[pos];
            for(int i=pos;i<arr->length-1;i++)
                arr->a[i] = arr->a[i+1];
            arr->length--;
            cout<<n<<" is deleted"<<endl;
            return 0;
        }
        else
        {
            cout<<"Invalid position"<<endl;
            return 0;
        }
    }
}

int insert(struct Array *arr)
{
    int pos,n;
    if( arr->length>=arr->size )
    {
        cout<<"The array is full"<<endl;
        return 0;
    }
    else
    {
        cout<<"Enter the position: ";
        cin>>pos;
        if( pos>=0 && pos<=arr->length )
        {
           cout<<"Enter the element: ";
           cin>>n;
           for(int i=arr->length;i>pos;i--)
                arr->a[i] = arr->a[i-1];
           arr->a[pos] = n;
           arr->length++;
           return 0;
        }
        else
        {
            cout<<"Invalid position"<<endl;
            return 0;
        }
    }
}

void append(struct Array *arr)
{
    int n;
    cout<<"Enter the element to append: ";
    cin>>n;
    arr->a[arr->length] = n;
    arr->length++;
}

void display(struct Array *arr)
{
    for(int i=0;i<arr->length;i++)
        cout<<arr->a[i]<<" ";
    cout<<endl;
}

int main()
{
    struct Array arr;
    cout<<"Enter the maximum size of the array: ";
    cin>>arr.size;
    arr.a = new int[arr.size];
    cout<<"Enter the number of elements: ";
    cin>>arr.length;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<arr.length;i++)
        cin>>arr.a[i];
    display(&arr);
    //append(&arr);
    //insert(&arr);
    del(&arr);
    display(&arr);
    return 0;
}
