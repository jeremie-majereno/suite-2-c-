#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[12],p,i,k;
	cin >> p >> k;
	for (i=0; i<k; i++) cin>>a[i];
		i=0;
	while ((i<k) && (a[i]!=p+120)) i++;
	if (i==k) cout << "No";
	else cout << "yes" ;


}