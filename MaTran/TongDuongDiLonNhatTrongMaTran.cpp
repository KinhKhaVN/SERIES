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
		
	int n, m;
	
	cin >> n >> m;
	int arr[n][m];
	
	FOR(i, 0, n)
		FOR(j, 0, m)
			cin >> arr[i][j];
			
	FOR(i, 1, n)
	{
		FOR(j, 0, m)
		{
			if(j == 0)
			{
				arr[i][j] += max(arr[i - 1][j], arr[i - 1][j + 1]);
			}
			else if(n == m - 1)
			{
				arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
			}
			else
			{
				arr[i][j] += max(arr[i - 1][j - 1], max(arr[i - 1][j], arr[i - 1][j + 1]));
			}
		}
	}
	
	int ans = 0;
	
	for(int i = n - 1; i < n; i++)
		for(int j = 0; j < m; j++)
			ans = max(ans, arr[i][j]);
			
	cout << ans;
	
	return 0;
}
