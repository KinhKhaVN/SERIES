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

void eraseElement(int *arr, int &arrSize, int key);
void displayArr(int *arr, int arrSize);
int maxElement(int *arr, int arrSize);

int main () {
	
	int arrSize;
	cin >> arrSize;
	
	int *arr = new int[arrSize];
	
	FOR(index, 0, arrSize)
	{
		cin >> arr[index];	
		if(arr[index] < 0)
		{
			eraseElement(arr, arrSize, index);
			index--;
		}
	}
	
	displayArr(arr, arrSize);
	
	return 0;
}

void eraseElement(int *arr, int &arrSize, int key)
{
	if(key < 0 || key > arrSize - 1)
	{
		return;
	}
	FOR(index, key, arrSize)
	{
		arr[index] = arr[index + 1];
	}
	arrSize--;
}

void displayArr(int *arr, int arrSize)
{
	FOR(index, 0, arrSize)
	{
		cout << arr[index] << " ";
	}
}

int maxElement(int *arr, int arrSize)
{
	int MAX = arr[0];
	FOR(index, 0, arrSize)
	{
		MAX = max(MAX, arr[index]);
	}
	return MAX;
}
