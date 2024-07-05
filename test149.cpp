#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[9],i,n,j;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
        j=0;
    for (i=0; i<n; i++)
    	if (a[i]==4) j++;
    cout << j;
}