#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[6],n,i,m;
	cin >> n >> m;
	for (i=0; i<n; i++) cin>>a[i];
		i=0;
	while ((i<n) && (a[i]!=m)) i++;
	if (i==n) cout << "No";
	else cout << "Yes";
}