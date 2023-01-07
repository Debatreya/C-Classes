/*Linear Search is defined as a sequential search algorithm that starts at one 
end and goes through each element of a list until the desired element is found,
 otherwise the search continues till the end of the data set. 
It is the easiest searching algorithm
*/
#include <iostream>
using namespace std;
int linear_search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
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
    int result = linear_search(a, n, query);
    if(result==-1)
    {
        cout<<"Element is not present";
        return 0;
    }
    cout<<"Element is present at index "<<result;
    return 0;
}