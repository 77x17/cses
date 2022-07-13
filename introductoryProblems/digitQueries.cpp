#include <bits/stdc++.h>

using namespace std;


long long k;

void Input() {
    cin >> k;
}


void Process() {
    long long d = 1, cnt = 9;

    while (k > d * cnt) {
        k -= d * cnt;

        d++; cnt *= 10;
    }

    cnt = cnt / 9 + (k - 1) / d;

    for (long long i = d; i > (k - 1) % d + 1; i--) cnt /= 10;

    cout << cnt % 10 << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        Input();

        Process();
    }

    return 0;
}
