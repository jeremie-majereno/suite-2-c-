#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[5],i,k,j;
	cin >> k;
	for (i=0; i<5 ;i++) cin>>a[i];
		j=0;
	for (i=0; i<5 ;i++)
	if (a[i]==k) j++;
	cout << j;

}