#include<iostream>
using namespace std;
int n; //bubble sort asending order
int main()
{
	cout<<"Enter how many records ";
	cin>>n;
	int a[n],i,j,t;
	cout<<"Enter array elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Value "<<i+1<<": ";
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1;j++)
	if(a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
	cout<<"Sorted array is"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
