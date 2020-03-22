#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m,count;
	cin >> n >> m;

	count = 0;

	count = (m * (m - 1) + n * (n - 1))/2;

	cout << count << endl;
}