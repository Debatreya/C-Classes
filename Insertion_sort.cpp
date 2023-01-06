#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Insertion_sort(int A[], int n)
{
    for(int j=0; j<n; j++)
    {
        int k=j;
        for (int i = j; i < n; i++)
        {
            if (A[k]>A[i])
            {
                k=i;
            }
            
        }
        if (k!=j)
        {
            while(A[k]<A[k-1] && k>0)
            {
                swap(&A[k], &A[k-1]);
                k=k-1;
            }
        }             
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
    Insertion_sort(a,n);
    cout<<"The Array Sorted using Bubble Sort Method is"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}