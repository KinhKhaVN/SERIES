#include <bits/stdc++.h>
using namespace std;
int soDoiXung(int n);
bool KT(int n);
int main () {
	int n;
	cin>>n;
	soDoiXung(n);
	if(KT(n))
	{
		cout<<"Dung";
	}
	else
	{
		cout<<"Sai";
	}
	return 0;
}
int soDoiXung(int n)
{
	int so_nghich_dao = 0, chu_so;
	while(n != 0)
	{
		chu_so = n % 10;
		so_nghich_dao = (so_nghich_dao * 10) + chu_so;
		n /= 10;
	}
	return so_nghich_dao;
}
bool KT(int n)
{
	if(n == soDoiXung(n)) 
	{
		return true;
	}
	else
	{
		return false;
	}
}
