#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[11],i,kol;
	for (i=0; i<11; i++) cin>>a[i];
		kol=0;
	for (i=0; i<11; i++)
		if (a[i]==15) kol++;
	cout << kol;
}