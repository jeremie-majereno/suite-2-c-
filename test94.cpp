#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[25],n,i,j;
	cin >> n;
	for (int i=0; i<n; i++) cin>>a[i];
		j=0;
	for ( int i=0; i<n; i++)
		if (a[i]==12) j++;
			cout << j;

}