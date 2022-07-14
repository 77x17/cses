#include <bits/stdc++.h>

using namespace std;


int n, m;  multiset<int, greater<int>> h;  vector<int> t;

void Input() {
    cin >> n >> m;  t.assign(m + 1, 0);

    for (int i = 1; i <= n; i++) {int e; cin >> e;  h.insert(e);}

    for (int i = 1; i <= m; i++) cin >> t[i];
}


void Process() {
    for (int i = 1; i <= m; i++) {
        multiset<int, greater<int>>::iterator j = h.lower_bound(t[i]);

        if (j != h.end()) {
            cout << *j << '\n';

            h.erase(j);
        } else cout << -1 << '\n';
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
