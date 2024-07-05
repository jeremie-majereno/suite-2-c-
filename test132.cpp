#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[7],n,i;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		i=0;
	while ((i<n) && (a[i]!=9) && (a[i]!=10)) i++;
	if (i==n) cout << "no";
	else cout << "yes" ;
}