#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[10],i,kol;
	for (i=0; i<10; i++) cin>>a[i];
		kol=0;
	for (i=0; i<10; i++)
		if (a[i]==0) kol++;
	cout << kol;
}