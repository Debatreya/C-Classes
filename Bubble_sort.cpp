#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void BubbleSort(int A[], int n)
{
    for(int j=0; j<n-1; j++)
    {
        int flag=0;
        for(int i=0; i<n-1; i++)
        {
            if(A[i]>A[i+1])
            {
                swap(&A[i], &A[i+1]);
                flag++;
            }
        }
        if(flag==0)
        {
            break;
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
    BubbleSort(a,n);
    cout<<"The Array Sorted using Bubble Sort Method is"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
