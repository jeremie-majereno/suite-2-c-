#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[6],i,k;
	for (i=0; i<6; i++) cin>>a[i];
		k=0;
	for (i=0; i<6; i++) 
		if (a[i]==2) k++;
	cout << k;

}