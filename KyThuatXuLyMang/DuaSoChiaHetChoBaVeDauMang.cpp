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
void moveElementToTop(int *arr, int arrSize, int key);

bool isDivideThree(int n);

int main () {
	
	int arrSize;
	cin >> arrSize;
	
	int *arr = new int[arrSize];
	
	FOR(index, 0, arrSize)
	{
		cin >> arr[index];	
	}
	
	
	FOR(index, 0, arrSize)
	{
		if(isDivideThree(arr[index]))
		{
			moveElementToTop(arr, arrSize, index);
		}
	}
	
	displayArr(arr, arrSize);
	
	return 0;
}

void displayArr(int *arr, int arrSize)
{
	FOR(index, 0, arrSize)
	{
		cout << arr[index] << " ";
	}
}

void moveElementToTop(int *arr, int arrSize, int key)
{
	int tmp = arr[key];
	for(int index = key; index > 0; index--)
	{
		arr[index] = arr[index - 1];
	}
	arr[0] = tmp;
}

bool isDivideThree(int n)
{
	return n % 3 == 0;
}
