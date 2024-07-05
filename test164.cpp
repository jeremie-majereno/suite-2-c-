#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[30],n,i,k,j;
	cin >> k >> n;
	for (i=0; i<n; i++) cin>>a[i];
		j=0;
	for (i=0; i<n; i++)
		if (a[i]==k) j++;
	cout << j;
}