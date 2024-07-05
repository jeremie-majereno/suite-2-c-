#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[20],i,n,k;
	cin >> k >> n;
	for (i=0; i<n; i++) cin>>a[i];
		i=0;
	while ((i<n) && (a[i]!=k)) i++;
	if (i==n) cout << "-";
	else cout << "+";
}