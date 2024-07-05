#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[8],n,i;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		i=0;
	while ((i<8) && (a[i]!=n)) i++;
		if (i==8) cout << "No";
	else cout << "yes";
}