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

void createMatrix(int **arr, int rows, int collums);

void displayMatrix(int **arr, int rows, int collums);

void deleteMatrix(int **arr, int rows, int collums);

int main () {
	
	int rows, collums;
	cin >> rows >> collums;
	
	int **arr = new int*[rows];
	
	FOR(index, 0, rows)
	{
		arr[index] = new int[collums];
	}
	
	createMatrix(arr, rows, collums);
	
	displayMatrix(arr, rows, collums);
	
	deleteMatrix(arr, rows, collums);
	
	return 0;
}

void createMatrix(int **arr, int rows, int collums)
{
	FOR(index_i, 0, rows)
	{
		FOR(index_j, 0, collums)
		{
			cin >> arr[index_i][index_j];	
		}	
	}
}

void displayMatrix(int **arr, int rows, int collums)
{
	FOR(index_i, 0, rows)
	{
		FOR(index_j, 0, collums)
		{
			cout << arr[index_i][index_j] << " ";	
		}
		cout << '\n';	
	}
}

void deleteMatrix(int **arr, int rows, int collums)
{
	FOR(index, 0, rows)
	{
		delete [] arr[index];
	}
	delete []arr;
}
