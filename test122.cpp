#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[12],i,n;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		i=0;
	while ((i<n) && (a[i]!=3) && (a[i]!=5)) i++ ;
	if (i==n) cout << "N";
	else cout << "Y";

}