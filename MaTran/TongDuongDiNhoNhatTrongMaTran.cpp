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
			
	int dp[n][m];
	
	FOR(i, 0, n)
		FOR(j, 0, m)
			if(i == 0 && j == 0)
				dp[i][j] = arr[i][j];
			else if(j == 0)
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			else if(i == 0)
				dp[i][j] = dp[i][j - 1] + arr[i][j];
			else
				dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + arr[i][j];

	
	cout << dp[n - 1][m - 1];
	
	return 0;
}
