#include <bits/stdc++.h>

using namespace std;


int n, x;  vector<int> arr;

void Input() {
    cin >> n >> x;  arr.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> arr[i];
}


map<int, int> pos;

void Process() {
    for (int i = 1; i <= n; i++) if (arr[i] < x) {
        if (pos[arr[i]] != 0) {
            cout << pos[arr[i]] << ' ' << i << '\n';

            return;
        }

        pos[x - arr[i]] = i;
    }

    cout << "IMPOSSIBLE\n";
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
