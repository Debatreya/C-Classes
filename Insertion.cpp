#include<stdio.h>
void insert(int a[], int n, int pos, int ele)
{
    for(int i=n-1; i>=pos-1; i--)
		{
			a[i+1]=a[i];
		}
		a[pos-1]=ele;
}
int main()
{
	char c;
	int n=10;
	int a[n]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n Lets update it\n");
	while(1)
	{
		int pos, ele;
		printf("Enter the element to insert: ");
		scanf("%d", &ele);
		printf("Enter the position where to insert: ");
		scanf("%d", &pos);
		insert(a, n, pos, ele);
		printf("Updated array is ");
		for(int i=0; i<=n; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\nDo you want to insert another element? (Y/N)\n");
		scanf(" %c", &c);
		if(c=='N' || c=='n')
		{
			break;
		}
		else
		n++;
	}
	return 0;
}
