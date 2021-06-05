#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[2]={3,400000};
	int b[2]={1,2};
	if(memchr(a, 400000, sizeof(int)*2)!=NULL)
		cout<<"Byte found";
	else
		cout<<"Byte not found";
	return 0;
}
