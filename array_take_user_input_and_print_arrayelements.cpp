#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int arr[1000];
	cout<<"Enter the total number of elements in the array: "<<endl;
	cin>>n;
	cout<<"Enter the array elements :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The array elements are: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}