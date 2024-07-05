#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[6],i;
	for (i=0; i<6; i++) cin>>a[i];
		i=0;
	while ((i<6) && (a[i]!=13)) i++;
		if (i==6) cout << "No";
	else cout << "Yes";

}