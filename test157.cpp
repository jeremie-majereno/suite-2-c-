#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[6],n,i;
	cin >> n;
	for (i=0; i<6; i++) cin>>a[i];
		i=0;
	while ((i<6) && (a[i]!=n)) i++;
	if (i==6) cout << "N" ;
	else cout << "Y";
}