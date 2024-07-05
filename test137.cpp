#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[15],i,min;
	for (i=0; i<15; i++) cin>>a[i];
		min=a[0];
	for (i=0; i<15; i++)
		if (a[i]<min) min=a[i];
	cout << min;
}