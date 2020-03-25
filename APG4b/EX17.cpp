#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,sum,count;

	cin >> n >> sum;

	vector<int> apple(n),pinapple(n);

	for(int i = 0;i < n;i++) {
		cin >> apple.at(i);
	}
	for(int i = 0;i < n;i++) {
		cin >> pinapple.at(i);
	}

	for(int x = 0;x < n;x++) {
		for(int y = 0;y < n;y++) {
			if(apple.at(x) + pinapple.at(y) == sum)
				count++;
		}
	}

	cout << count << endl;
}