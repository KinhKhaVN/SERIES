#include <iostream>
#include <cmath>
using namespace std;
float sum(int n);
int main () {
	int n;
	cin>>n;
	cout<<sum(n);
	return 0;
}
float sum(int n)
{
	float kq=0;
	for(int i = 1; i <= n; ++ i)
	{
		kq = (float) kq + 1.0/(2*i) ;
	}
	return kq;
}
