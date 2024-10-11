#include <iostream>
#include <cmath>
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
	int i = 1;
	while( i <= n)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";
		}
		++i;
	}
}
