#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[12],m,n,i,sum;
	cin >> m >> n;
	for (i=0; i<n; i++) cin>>a[i];
		sum=0;
	for (i=0; i<n; i++) sum+=a[i];
	cout << sum ;
		if (m>=sum) cout << "+" ;
	else cout << sum-m;

}