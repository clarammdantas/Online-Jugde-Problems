// Interval Product
// Clara Moraes Dantas

#include <bits/stdc++>

using namespace std;

int getMid(int s, int e) {
	return s + (e - s) / 2;
}

int constructSTUtil(int arr[], int ss, int *st, int si) {
	if (ss == se) {
		st[si] = arr[ss];
		return arr[ss];
	}

	int mid = getMid(ss, se);
	st[si] = constructSTUtil(arr, ss, mid, st,si * 2 + 1) +
		constructSTUtil(arr, mid + 1, se, st, si * 2 + 2);

	return st[si];
}

int *constructST(int arr[], int n) {
	int x = (int)(ceil(log2(n))), max_size = 2 * (int)pow(2, x) - 1;
	int *st = new int[max_size];

	constructSTUtil(arr, 0, n-1, st, 0);

	return st;
}

int main() {


	return 0;
}