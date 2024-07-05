#include <bits/stdc++.h>
using namespace std ;
int main()
{
	double a[11],min;
	for (int i=0; i<11; i++) cin>>a[i];
		min=a[0];
	for (int i=0; i<11; i++) 
		if (a[i]<min) min=a[i];
	cout << setprecision(1) << fixed << min;
}