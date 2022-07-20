#include <bits/stdc++.h>

using namespace std;


int n, arr[200001];

void Input() {
    cin >> n;  for (int i = 1; i <= n; i++) cin >> arr[i];
}


map<int, bool> visited;

void Process() {
    int result = 0, cnt = 0, l = 1, r = 1;

    while (r <= n) {
        if (not visited[arr[r]]) {
            visited[arr[r++]] = true;

            cnt++;
        } else {
            visited[arr[l++]] = false;

            cnt--;
        }

        result = max(result, cnt);
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
