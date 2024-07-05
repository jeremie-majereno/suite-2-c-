#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[8],n,i,min,nom;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		min=a[0]; nom=0;
	for (i=0; i<n; i++)
		if (a[i]<min) {min=a[i];nom=i;}
	cout << nom+1 << ", " << min ;
}