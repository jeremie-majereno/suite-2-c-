#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[14],i,n,k;
	cin >> n >> k;
	for (i=0; i<n; i++) cin>>a[i];
		i=0;
	while ((i<n) && (a[i]!=k)) i++;
	if (i==n) cout << "N" ;
	else cout << "Y";

}