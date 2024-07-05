#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[7],i,n,k,sum;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		cin >> k;
	    sum=0;
	for (i=0; i<n; i++) sum+=a[i];
	if (sum>=k) cout << "Y";
	else cout << "N" ; 

}