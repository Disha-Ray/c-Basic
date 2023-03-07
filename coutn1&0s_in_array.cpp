#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100]={1,1,0,1,0,0,1,1,0,1,1,1,1};
	int cnt1=0,cnt0=0;
	for(int i=0;i<13;i++)
	{
		if(arr[i]==1)
		{
			cnt1++;
		}
		else
		{
			cnt0++;
		}
	}
	cout<<"Count of 1:"<<cnt1<<endl;
	cout<<"Count of 0:"<<cnt0<<endl;
	return 0;

}