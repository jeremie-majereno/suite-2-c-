#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n,i,nom;
	double a[9],max;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
     max=a[0]; nom=0;
    for (i=0; i<n; i++)
    	if (a[i]>max) {max=a[i];nom=i;}
    cout << setprecision(2) << fixed << max << endl;
    cout << nom+1;
}