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
	
	int arr[n + 1];
	int SUM[n + 1];
	FOR(i, 1, n + 1)
		cin >> arr[i];	
		
	SUM[1] = arr[1];
	FOR(i, 2, n + 1)
		SUM[i] = SUM[i - 1] + arr[i];
	
	FOR(i, 1, n + 1)
		cout << SUM[i] << " ";
	
	int key;
	cin >> key;
	
	cout << SUM[key];
	
	return 0;
}
