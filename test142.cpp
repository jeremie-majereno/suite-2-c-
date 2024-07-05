#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[15],n,i,max,nom;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		max=a[0];nom=0;
	for (i=0; i<n; i++)
		if (a[i]<max) {max=a[i];nom=i;}
	cout << max << endl;
	cout << nom+1;

}
