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

int n, m, arr[1000][1000];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j)
{
	arr[i][j] = 0;
	for(int k = 0; k < 8; k++)
	{
		int ii = i + dx[k];
		int jj = j + dy[k];
		if(ii >= 0 && ii < n && jj >= 0 && jj < m && arr[ii][jj] == 1)
		{
			dfs(ii, jj);
		}
	}
}

int main () {
	
	cin >> n >> m;
	
	FOR(i, 0, n)
		FOR(j, 0, m)
			cin >> arr[i][j];
			
	int count = 0;
	
	FOR(i, 0, n)
	{
		FOR(j, 0, m)
		{
			if(arr[i][j] == 1)
			{
				count++;
				dfs(i, j);
			}
		}
	}
	
	cout << count;	
		
	
	
	return 0;
}
