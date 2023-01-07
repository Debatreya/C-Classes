#include<iostream>
using namespace std;
void merge(int L[], int R[], int A[], int l, int r)
{
    int i=0, j=0, k=0;
    while(i<l && j<r)
    {
        if(L[i]< R[j])
        {
            A[k]=L[i];
            i=i+1;
        }
        else
        {
            A[k]=R[j];
            j=j+1;
        }
        k=k+1;
    }
    while(i<l)
    {
        A[k]=L[i];
        i=i+1;
        k=k+1;
    }
    while(j<r)
    {
        A[k]=R[j];
        j=j+1;
        k=k+1;
    }
}
void Merge_sort(int A[], int n)
{
    if(n<2)
    return;
    int mid=n/2;
    int L[mid], R[n-mid];
    for(int i=0; i<mid; i++)
    {
        L[i]=A[i];
    }
    for(int i=mid; i<n; i++)
    {
        R[i-mid]=A[i];
    }
    Merge_sort(L, mid);
    Merge_sort(R, n-mid);
    merge(L, R, A, mid, n-mid);
}
int main()
{
    cout<<"Enter size: ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    Merge_sort(a,n);
    cout<<"The Array Sorted using Merge Sort Method is"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}