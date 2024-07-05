#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[25],n,i,kol;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		kol=0;
	for (i=0; i<n; i++)
	if (a[i]==20) kol++;
	cout << kol;
}