#include <bits/stdc++.h>

using namespace std;


int a, b;

void Input() {
    cin >> a >> b;
}


void Process() {
    if ((a + b) % 3) cout << "NO\n";
    else if (2 * b - a < 0) cout << "NO\n";
    else if (2 * a - b < 0) cout << "NO\n";
    else cout << "YES\n";
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        Input();

        Process();
    }

    return 0;
}
