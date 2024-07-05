#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[7],i,k;
	for (i=0; i<7; i++) cin>>a[i];
		k=0;
	for (i=0; i<7; i++)
		if (a[i]==207) k++;
	cout << k;
}