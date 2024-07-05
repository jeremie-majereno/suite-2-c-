#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],m,kol,i,n;
	cin >> n;
	for (i=0; i<n ;i++) cin>>a[i];
		cin >> m;
	kol=0;
	for (i=0; i<n; i++)
		if (a[i]==m) kol++;
	cout << kol;
}