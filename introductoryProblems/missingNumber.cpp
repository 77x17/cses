#include <bits/stdc++.h>

using namespace std;


int n;  vector<int> cnt;

void Input() {
    cin >> n;  cnt.assign(n + 1, 0);

    for (int i = 1; i < n; i++) {
        int e;  cin >> e;  cnt[e]++;
    }
}


void Process() {
    for (int i = 1; i <= n; i++) if (cnt[i] == 0) cout << i << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
