#include <bits/stdc++.h>

using namespace std;


long long n;

void Input() {
    cin >> n;
}


void Process() {
    while (true) {
        cout << n << ' ';

        if (n == 1) break;

        n = (n & 1) ? n * 3 + 1 : n / 2;
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
