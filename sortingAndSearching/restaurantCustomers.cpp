#include <bits/stdc++.h>

#define fi first

#define se second

using namespace std;


int n;  vector<pair<int, bool>> arr;

void Input() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int e; cin >> e;  arr.push_back({e, false});

        int E; cin >> E;  arr.push_back({E, true});
    }
}


void Process() {
    sort(arr.begin(), arr.end());

    int result = 0, customers = 0;

    for (pair<int, bool> e : arr) {
        if (e.se == true) customers--; else customers++;

        result = max(result, customers);
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
