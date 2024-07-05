#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5],max,i;
	for (int i=0; i<5; i++) cin>>a[i];
		max=a[0];
	for (int i=0; i<5; i++) 
		if (a[i]>max) max=a[i];
	cout << max ;
}