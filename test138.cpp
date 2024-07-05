#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[6],n,i,k;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		cin >> k;
	i=0;
	while ((i<n) && (a[i]!=k)) i++;
	if (i==n) cout << "no";
	else cout << "yes";
}