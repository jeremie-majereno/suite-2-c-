#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int b[30],i,k,p,j,s;
	double a[30],n;
	cin >> k >> p;
	for (i=0; i<k; i++) cin>>a[i];
	for (i=0; i<p; i++) cin>>b[i];
	cin >> n >> s;
    i=0;
    while ((i<k) && (a[i]!=n)) i++;
    j=0;
    while ((j<p) && (b[j]!=s)) j++;
    if ((i==k) or (j==p)) cout << "No masterpiece";
    else cout << "Yes masterpiece";
}