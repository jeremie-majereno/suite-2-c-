#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[20],k,n,i;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
	 i=0; k=700;
	while ((i<n) && (a[i]!=k)) i++;
	if (i==n) cout << "No";
	else cout << "Yes";


}