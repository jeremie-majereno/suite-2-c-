#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[11],i,sum;
	for (i=0; i<11;i++) cin>>a[i];
		sum=0;
	for (i=0; i<11;i++) sum+=a[i];
	cout << sum+115;
}