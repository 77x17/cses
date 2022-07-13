#include <bits/stdc++.h>

using namespace std;


int n;

void Input() {
    cin >> n;
}


void Process() {
    if (n == 2 || n == 3) cout << "NO SOLUTION\n";

    for (int i = 2; i <= n; i += 2) cout << i << ' ';

    for (int i = 1; i <= n; i += 2) cout << i << ' ';

    cout << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
