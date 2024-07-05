#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],n,max;
	cin >> n;
	for (int i=0; i<n; i++) cin>>a[i];
		max=a[0];
	for (int i=1; i<n; i++)
		if (a[i]>max) max=a[i];
	cout << max;
}