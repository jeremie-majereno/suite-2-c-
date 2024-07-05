#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int a[7],n,m,k,s;
	cin >> n;
	for (int i=0; i<n; i++) cin>>a[i];
		cin >> k >> m;
	s=0;
	for (int i=0; i<n; i++) s+=a[i];
		if (s<=k+m) cout << "Yes" ;
	else cout << "No";
}