#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;


int n;

void Input() {
    cin >> n;
}


int mPow(int a, int b) {
    if (b == 0) return 1;

    int temp = mPow(a, b / 2);

    temp = 1LL * temp * temp % MOD;

    if (b & 1) temp = 1LL * temp * a % MOD;

    return temp;
}

void Process() {
    cout << mPow(2, n) << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
