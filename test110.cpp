#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[12],n,max,i,nom;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		max=a[0]; nom=0;
	for (i=0; i<n ; i++)
		if (a[i]>max) { max=a[i]; nom=i;}
	cout << nom+1 << endl;
	cout << max << endl;
}