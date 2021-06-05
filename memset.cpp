#include<bits/stdc++.h>

using namespace std;

int main()
{
	clock_t t;
	
	
	int a[10000];
	int b[2]={3,4};
	t=clock();
	//memset(a, -1, 1000000 * sizeof(int));
	for(int i=0;i<10000;i++)
		a[i]=-1;
	t=clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("%0.9lf",time_taken);
	printf("\n%d %d", a[500],a[1000]);
	return 0;
}
