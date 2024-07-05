#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a[6],min;
	int i;
	for (i=0; i<6; i++) cin>>a[i];
		min=a[0];
	for (i=0; i<6; i++)
		if (a[i]<min) min=a[i];
	cout << setprecision(1) << fixed << min;
}