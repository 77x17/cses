#include <bits/stdc++.h>

using namespace std;


int n, m, k;  vector<int> a, b;

void Input() {
    cin >> n >> m >> k;  a.assign(n + 1, 0);  b.assign(m + 1, 0);

    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= m; i++) cin >> b[i];
}


int result = 0;

void Process() {
    sort(a.begin() + 1, a.end()),  sort(b.begin() + 1, b.end());

    int u = 1, v = 1;

    while (u <= n && v <= m) {
        if (abs(a[u] - b[v]) <= k) {
            result++;  u++;  v++;
        } else {
            while (abs(a[u] - b[v]) > k) {
                if (a[u] > b[v]) v++; else u++;

                if (u == n + 1 || v == m + 1) break;
            }
        }
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
