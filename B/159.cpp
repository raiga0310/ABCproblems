#include<bits/stdc++.h>
using namespace std;

bool judgeKaibun(vector<char> v) {
	vector<char> rv;
    reverse(v.begin(),v.end());
    rv = v;
    reverse(v.begin(),v.end());
	if(v != rv) {
		return false;
	}
	return true;
}

int main() {
	vector<char> str;
	std::vector<char> p_str,o_str;
    int i = 0;
	while(str.at(i) != '\n') {
		char k;
		cin >> k;
		str.push_back(k);
	}
	int size = str.size();
    if(judgeKaibun(str)) {
        for(int i = 0;i < str.size() / 2;i++) {
        	p_str.push_back(str.at(i));
        	o_str.push_back(str.at(( 3) / 2 + i));
        }
    }
    while((judgeKaibun(p_str) != false) && (judgeKaibun(o_str) != false)) {
        cout << "Yes" << endl;
		return 0;
	}

	cout << "No" << endl;
}