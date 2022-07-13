#include <bits/stdc++.h>

using namespace std;


int n;

void Input() {
    cin >> n;
}


void Process() {
    for (long long i = 1; i <= n; i++) {
        cout << (i * i - 1) * (i * i) / 2 - 4 * (i - 1) * (i - 2) << '\n';
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
