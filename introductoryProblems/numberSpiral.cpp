#include <bits/stdc++.h>

using namespace std;


int x, y;

void Input() {
    cin >> x >> y;
}


void Process() {
    long long n = max(x, y), l = (n - 1) * (n - 1) + 1, r = n * n;

    cout << ((n & 1) ? ((x == n) ? l + y - 1 : r - x + 1) : ((x == n) ? r - y + 1 : l + x - 1)) << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        Input();

        Process();
    }

    return 0;
}
