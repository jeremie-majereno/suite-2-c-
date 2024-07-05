#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[10],i,n,k,j;
	cin >> n >> k >> j;
	for (i=0; i<n; i++) cin>>a[i];
		i=0;
	while ((i<n) && (a[i]!=k) && (a[i]!=j)) i++;
	if (i==n) cout << "N" ;
	else cout << "Y";
}