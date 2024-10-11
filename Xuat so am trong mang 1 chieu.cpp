#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
int main () {
	int n;
	int a[100];
	cin>>n;
	nhap(a, n);
	xuat(a, n);
	return 0;
}
void nhap(int a[], int &n)
{
	for(int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
}
void xuat(int a[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		if(a[i] < 0)
		{
			cout<<a[i]<<" ";
		}
	}
}


