//Letters Cyclic Shift

#include <bits/stdc++.h>

using namespace std;

string alpha_letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
						'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int getIndex(char a) {
	int index = -1;
	for (int i = 0; i < 26; i++) {
		if (alpha_letters[i] == a) {
			index = i;
			break;
		}
	}

	return index;
}

int main() {
	string word;
	cin >> word;

	string n_word = "";

	for (int i = 0; i < word.size(); i++) {
		int indexLetter = getIndex(word[i]);

		if (indexLetter != 0) {
			n_word += alpha_letters[i-1];
		} else {
			n_word += 'a';
		}
	}

	cout << n_word << endl;

	return 0;
}