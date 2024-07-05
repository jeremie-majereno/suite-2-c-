#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[30],kol;
	for (int i=0; i<30; i++) cin>>a[i];
		kol=0;
	for (int i=0; i<30; i++)
		if (a[i]==1) kol++;
	cout << kol;
}