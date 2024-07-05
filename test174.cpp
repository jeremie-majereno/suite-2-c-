#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[30],i,n,k;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		k=0;
    for (i=0; i<n; i++)
	if ((a[i]==7) || (a[i]==8) || (a[i]==9) || (a[i]==10)) k++;
	 cout << k; 
}