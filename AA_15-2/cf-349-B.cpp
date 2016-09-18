// Codeforces - Color the Fence - round 202 div 2 B

#include <iostream>

using namespace std;

int n, a, ans, k;
int s[150009];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s[i + 1] = s[i] + a;
    }

    for (int i = 1; i <= n - k; i++) {
        if (s[i + k] - s[i] < s[ans + k] - s[ans])
            ans = i;
    }
    cout << ans + 1;
    return 0;
}