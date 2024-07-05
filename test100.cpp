#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int a[8],n,i,erreur,nom;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		erreur=a[0]; nom=0 ;
	for (i=0; i<n; i++) 
		if (a[i]>erreur) {erreur=a[i]; nom=i;}
	cout << erreur << " " << nom+1;
}