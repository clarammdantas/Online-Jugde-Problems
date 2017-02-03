// Array - Codeforces div2 A - 181
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> s1, s2, s3;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		if (x == 0) s2.push_back(x);

		else if (x < 0) s1.push_back(x);

		else s3.push_back(x);
	}

	if (s3.size() == 0) {
		s3.push_back(s1[0]), s3.push_back(s1[1]);
		s1.erase(s1.begin());
		s1.erase(s1.begin());
	}

	if (s1.size() % 2 == 0) {
		s2.push_back(s1[0]);
		s1.erase(s1.begin());
	}

	cout << s1.size() << " ";
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] != 0) {
			if (i < s1.size() - 1) {
				cout << s1[i] << " ";
			} else {
				cout << s1[i] << endl;
			}
		}
	}

	cout << s3.size() << " ";
	for (int i = 0; i < s3.size(); i++) {
		if (i < s3.size() - 1) {
			cout << s3[i] << " ";
		} else {
			cout << s3[i] << endl;
		}
	}
	
	cout << s2.size() << " ";
	for (int i = 0; i < s2.size(); i++) {
		if (i < s2.size() - 1) {
			cout << s2[i] << " ";
		} else {
			cout << s2[i] << endl;
		}
	}

	return 0;
}
