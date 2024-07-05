#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[11],i,n,k,h;
	cin >> k >> n;
	for (i=0; i<n; i++) cin>>a[i];
		h=0;
	for (i=0; i<n; i++)
		if (a[i]==k) h++;
	cout << h;
}