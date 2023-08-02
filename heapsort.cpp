#include<iostream>
using namespace std;

void heapify(int A[],int n,int i)
{
	int largest = i;
	int l =(2*i);
	int r =(2*i)+1;
	while(l <= n && A[l] > A[largest])
	{
		largest = l;
	}
	while(r <= n && A[r] > A[largest])
	{
		largest = r;
	}
	if(largest != i)
	{
		swap(A[largest],A[i]);
		heapify(A,n,largest);
	}
}
void heapsort(int A[],int n)
{
	for(int i=n/2;i>=1;i--)
	{
		heapify(A,n,i);
	}
	for(int i=n;i>=1;i--)
	{
		swap(A[0],A[i]);
		heapify(A,n,0);
	}
}
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a =*b;
	*b = temp;
}
int main()
{
	int n,i;
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	heapsort(A,n);
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}

