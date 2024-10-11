#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <sstream>
#include <algorithm>

#define ll long long
#define pi pair<int, int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FOR_RV(i, a, b) for(int i = a; i >= b; i--)


using namespace std;

void displayChildArr(int *arr, int arrSize);


int main () {
	
	int arrSize;
	cin >> arrSize;
	
	int *arr = new int[arrSize];
	
	FOR(index, 0, arrSize)
	{
		cin >> arr[index];	
	}
	
	displayChildArr(arr, arrSize);
	
	return 0;
}



void displayChildArr(int *arr, int arrSize)
{
	FOR(index_i, 0, arrSize)
	{
		FOR(index_j, index_i, arrSize)
		{
			FOR(index_k, index)
		}
		cout << '\n';
	}
}
