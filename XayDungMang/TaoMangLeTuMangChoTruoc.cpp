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

void oddArray(int *standardArray, int *newArray, int arrSize);

bool isOddNumber(int n);

int oddCount(int *arr, int arrSize);


int main () {
	
	int arrSize;
	cin >> arrSize;
	
	int *standardArray = new int[arrSize];
	
	createArray(standardArray, arrSize);
	
	int newArraySize = oddCount(standardArray, arrSize);
	
	int *newArray = new int[newArraySize];
	
	oddArray(standardArray, newArray, arrSize);
	
	displayArray(newArray, newArraySize);
	
	return 0;
}

void oddArray(int *standardArray, int *newArray, int arrSize)
{
	int tmp = 0;
	FOR(index, 0, arrSize)
	{
		if(isOddNumber(standardArray[index]))
		{
			newArray[tmp++] = standardArray[index];
		}
	}
}

int oddCount(int *arr, int arrSize)
{
	int countOdd = 0;
	FOR(index, 0, arrSize)
	{
		if(isOddNumber(arr[index]))
		{
			countOdd++;
		}
	}
	return countOdd;
}

bool isOddNumber(int n)
{
	return n % 2 != 0;
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

