#include <bits/stdc++.h>
using namespace std;
int giaiThua(int n);
int dem(int n);
int main () {
	int n;
	cin>>n;
	cout<<giaiThua(n);
	return 0;
}
int giaiThua(int n)
{
	long long  sum = 1;
	long long dv;
	long long dem = 0;
	for(int i = 1; i <= n; ++i)
	{
		sum *= i;
	}
	while(sum >= 10)
	{
		dv = sum % 10;
		if( dv == 0)
		{
			++dem;
		}
		else
		{
			break;
		}
		sum /= 10;
	}
	return dem;
}
