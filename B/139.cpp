#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,count = 0,outlet = 1;
	cin >> a >> b;

	while(outlet < b) {
		--outlet;
		outlet += a;
	    ++count;
	}

	cout << count << endl;
}