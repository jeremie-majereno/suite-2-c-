#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[9],sum,s;
	for (int i=0; i<9; i++) cin>>a[i];
		cin >> sum;
	s=0;
	for (int i=0; i<9; i++) s+=a[i];
		if (s==sum) cout << "+";
	else cout << "-";
}