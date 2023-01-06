#include<iostream>
using namespace std;
void selectionsort(int A[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int k=i;
        for(int j=i+1; j<n; j++)
        {
            if(A[j]<A[k])
            {
                k=j;
            }
        }
        int temp=A[i];
        A[i]=A[k];
        A[k]=temp;
    }
}
int main()
{
    cout<<"Enter size: ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter distinct elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    selectionsort(a,n);
    cout<<"The Array Sorted using Selection Sort Method is"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}