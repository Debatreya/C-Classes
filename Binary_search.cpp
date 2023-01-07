/*Binary Search Algorithm: The basic steps to perform Binary Search are:

Begin with the mid element of the whole array as a search key.
If the value of the search key is equal to the item then return an index of the search key.
Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
Otherwise, narrow it to the upper half.
Repeatedly check from the second point until the value is found or the interval is empty.
*/
//Works only with sorted array
#include<iostream>
using namespace std;
int Binary_search(int A[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (A[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (A[mid] > x)
            return Binary_search(A, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return Binary_search(A, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
int main()
{
    int n, query;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    cout<<"Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the query: ";
    cin>>query;
    int result = Binary_search(a, 0, n-1, query);
    if(result==-1)
    {
        cout<<"Element is not present";
        return 0;
    }
    cout<<"Element is present at index "<<result;
    return 0;
}