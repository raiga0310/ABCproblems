#include<bits/stdc++.h>
using namespace std;

#define rep(n) for(int i = 0;i < n;i++)

int main() {
	std::vector<int> num(5);
	rep(5) {
		cin >> num.at(i);
	}

    rep(4) {
    	if(num.at(i) == num.at(i+1)) {
    		cout << "YES" << endl;
    		return 0;
    	}
    	
    }
	cout << "NO" << endl;
}