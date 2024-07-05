#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,m,sum;
	cin >> m;
	for (i=0; i<10; i++) cin>>a[i];
        sum=0;
    for (i=0; i<10; i++) sum+=a[i];
    	if (m>=sum) cout << "-";
    else cout << "+";

}