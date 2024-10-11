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

int main () {
	
	int n;
	
	cin >> n;
	int arr[n][3];
	
	FOR(i, 0, n)
		FOR(j, 0, 3)
			cin >> arr[i][j];
			
	
	int countRow = 0;
	
	FOR(i, 0, n)
	{
		int countZ = 0, countO = 0;
		FOR(j, 0, 3)
		{
			if(arr[i][j] == 0)
				countZ++;
			else
				countO++;
		}
		if(countO > countZ)
			countRow++;
	}
	cout << countRow;	
	
	return 0;
}
