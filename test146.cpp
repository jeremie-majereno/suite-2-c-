#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a[8],max;
	int i;
	for (i=0; i<8; i++) cin>>a[i];
		max=a[0];
	for (i=0; i<8; i++)
		if (a[i]>max) max=a[i];
	cout << setprecision(1) << fixed << max;
}