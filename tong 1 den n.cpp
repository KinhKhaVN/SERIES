#include <iostream>
#include <cmath>
using namespace std;
int sum(int n);
int main () {
	int n;
	cin>>n;
	cout<<sum(n);
	return 0;
}
int sum(int n)
{
	int kq=0;
	for(int i = 1; i <= n; ++ i)
	{
		kq += i;
	}
	return kq;
}
