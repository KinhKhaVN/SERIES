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
		float kq = (float) kq + 1.0 / ((2*i)+1);
	}	
	return kq;
}
