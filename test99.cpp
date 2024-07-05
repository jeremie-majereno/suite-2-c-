#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int a[10],n,h,s,i;
	for (int i=0; i<10; i++) cin>>a[i];
		n=0; h=0; s=0;
	for (int i=0; i<10; i++)
	{
		if (a[i]==9) n++;
		if (a[i]==8) h++;
		if (a[i]==7) s++; 
	}
	cout << n << endl;
	cout << h << endl;
	cout << s << endl;
}