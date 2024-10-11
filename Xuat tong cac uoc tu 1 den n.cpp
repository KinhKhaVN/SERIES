#include <bits/stdc++.h>
using namespace std;
void UC(int n);
int main () {
	int n;
	cin>>n;
	UC(n);
	return 0;
}
void UC(int n)
{
	int i=1;
	int sum=0;
	while(i <= n)
	{
		if(n % i == 0)
		{
			sum += i;
		}
		++i;
	}
	cout<<sum;
}
