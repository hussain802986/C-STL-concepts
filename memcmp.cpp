#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[10],b[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<10;i++)
	{
		cin>>b[i];
	}
	if(memcmp(a,b,10*sizeof(int))==0)
		cout<<"same"<<endl;
	else
		cout<<"not same"<<endl;
	return 0;
}
