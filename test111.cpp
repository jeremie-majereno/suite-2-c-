#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],n,i,min;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		min=a[0];
	for (i=0; i<n; i++)
		if (a[i]<min) min=a[i];
	cout << min ;
}