#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int a[5],i,n;
    for (i=0; i<5; i++) cin>>a[i];
    cin >> n;
    i=0;
    while ((i<5) && (a[i]!=n)) i++;
    	if (i==5) cout << "No";
    else cout << "Yes";
}