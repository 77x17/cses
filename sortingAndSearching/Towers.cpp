#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;


int n, arr[200001];

void Input() {
    cin >> n;  for (int i = 1; i <= n; i++) cin >> arr[i];
}


int f[200001];

void Process() {
    fill(f, f + n + 1, INF);  f[0] = -INF;

    int result = 0;

    for (int i = 1; i <= n; i++) {
        int j = upper_bound(f, f + n + 1, arr[i]) - f;

        f[j] = arr[i];

        result = max(result, j);
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
