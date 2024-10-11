#include <iostream>
#include <math.h>
#include <string.h>
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

void createArray(int *arr, int arrSize);

void displayArray(int *arr, int arrSize);

void leftRightSumArray(int *standardArray, int *newArray, int arrSize);

int main () {
	
	int arrSize;
	cin >> arrSize;
	
	int *standardArray = new int[arrSize];
	
	createArray(standardArray, arrSize);
	
	int newArraySize = arrSize - 2;
	
	int *newArray = new int[newArraySize];
	
	leftRightSumArray(standardArray, newArray,  arrSize);
	
	displayArray(newArray, newArraySize);
	
	return 0;
}
// 1 2 3 4 5
void leftRightSumArray(int *standardArray, int *newArray, int arrSize)
{
	int tmp = 0;
	FOR(index, 1, arrSize - 1)
	{
		newArray[tmp++] = standardArray[index - 1] + standardArray[index + 1];
	}
}

void createArray(int *arr, int arrSize)
{
	FOR(index, 0, arrSize)
	{
		cin >> arr[index];	
	}
}

void displayArray(int *arr, int arrSize)
{
	FOR(index, 0, arrSize)
	{
		cout << arr[index] << " ";
	}
}
