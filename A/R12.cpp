#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<string> dayName = {"Monday",
                              "Tuesday",
                              "Wednesday",
                              "Thursday",
                              "Friday",
                              "Saturday",
                              "Sunday"
                          };
    string name;
    int answer;
    cin >> name;
    for(int i = 0;i < 7;i++) {
    	if(name == dayName.at(i))
    		answer = 5 - i;
    	if(answer < 0)
    		answer = 0;
    }
    cout << answer << endl;
}