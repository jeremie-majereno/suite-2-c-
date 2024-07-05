#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[30],n,i,min,j;
	cin >> n;
	for (int i=0; i<n; i++) cin>>a[i];
		min=a[0]; j=0;
	for (int i=0; i<n; i++)
		if (a[i]<min) {min=a[i]; j=i;}
	cout << min << ", " << j+1;
}