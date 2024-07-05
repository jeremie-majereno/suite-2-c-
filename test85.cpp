#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,max,j;
	for (i=0; i<10; i++) cin>>a[i];
		max=a[0]; j=0;
	for (i=0; i<10; i++) 
		if (a[i]>max) { max=a[i]; j=i;}
	cout << max << endl;
	cout << j+1;
}