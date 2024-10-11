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

void displayArr(int *arr, int arrSize);
void reverseArr(int *arr, int arrSize);

int main () {
	
	int arrSize;
	cin >> arrSize;
	
	int *arr = new int[arrSize];
	
	FOR(index, 0, arrSize)
	{
		cin >> arr[index];	
	}
	
	reverseArr(arr, arrSize);
	
	displayArr(arr, arrSize);
	
	return 0;
}

void reverseArr(int *arr, int arrSize)
{
	for(int index_i = 0, index_j = arrSize - 1; index_i < index_j; index_i++, index_j--)
	{
		swap(arr[index_i], arr[index_j]);
	}
}

void displayArr(int *arr, int arrSize)
{
	FOR(index, 0, arrSize)
	{
		cout << arr[index] << " ";
	}
}

