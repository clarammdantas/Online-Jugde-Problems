//Watching a Movie - Codeforces 499 A

#include <bits/stc++.h>

using namespace std;
typedef long long int ll;

int main() {
	ll bestMoments, passButton, atTheMoment = 0;
	cin >> bestMoments >> passButton;

	vector<pair<ll, ll> > timeBestMoments;

	for (ll i = 0; i < bestMoments; i++) {
		ll x, y;
		cin >> x >> y;

		timeBestMoments.push_back(make_pair(x, y));
	}

	ll watched = 0;
	for (ll i = 0; i < bestMoments; i++) {
		while (atTheMoment + passButton <= timeBestMoments[i].first()) {
			atTheMoment += passButton;
		}

		watched += timeBestMoments[i].second() - atTheMoment;
		atTheMoment = timeBestMoments[i].second;
	}

	cout << watched << endl;

	return 0;
}
