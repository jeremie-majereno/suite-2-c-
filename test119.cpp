#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[20],i,n,k;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		k=0;
	for (i=0; i<n; i++)
		if (a[i]==6) k++;
	cout << k;

}