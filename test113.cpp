#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[4],s,n;
	cin >> n;
	for (int i=0; i<4; i++) cin>>a[i];
		s=0;
	for (int i=0; i<4; i++) s+=a[i];
		if (s<=n) cout << "+" ;
	else  cout << s-n ;
}