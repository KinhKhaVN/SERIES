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
#include <queue>

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
	int n, key;
	
	cin >> n >> key;
	
	int arr[n];
	
	FOR(i, 0, n)
		cin >> arr[i];
	
	queue<int> q;
	int sum = 0;
	int MAX = 0;
	
	FOR(i, 0, n - key + 1)
	{
		FOR(j, 0, key)
		{
			sum += arr[i + j];
		}
		if(sum > MAX)
		{
			MAX = sum;
			FOR(c, 0, key)
			{
				q.push(arr[i + c]);
			}
			if(i != 0)
			{
				FOR(l, 0, key)
				{
					q.pop();
				}
			}
		}
		sum = 0;
	}
	
	cout << MAX << '\n';
	FOR(i, 0, key)
	{
		cout << q.front() << " ";
		q.pop();
	}
	
	
	return 0;
}
