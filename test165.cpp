#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[7],i,max,nom;
	for (i=0; i<7; i++) cin>>a[i];
		max=a[0]; nom=0;
	for (i=0; i<7; i++ )
		if (a[i]>max) {max=a[i];nom=i;}
	cout << max << endl;
	cout << nom+1;

}