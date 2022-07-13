#include <bits/stdc++.h>

#define fi first

#define se second

using namespace std;


int n;

void Input() {
    cin >> n;
}


vector<pair<int, int>> order;

void Backtrack(int n, int l, int mid, int r) {
    if (n == 0) return;

    if (n == 1) {
        order.push_back({l, r});

        return;
    }

    Backtrack(n - 1, l, r, mid);

    Backtrack(1, l, mid, r);

    Backtrack(n - 1, mid, l, r);
}

void Process() {
    Backtrack(n - 1, 1, 3, 2);

    Backtrack(1, 1, 2, 3);

    Backtrack(n - 1, 2, 1, 3);

    cout << order.size() << '\n';

    for (pair<int, int> e : order) cout << e.fi << ' ' << e.se << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
