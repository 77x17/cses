#include <bits/stdc++.h>

using namespace std;


int n, q;  vector<int> arr;

void Input() {
    cin >> n >> q;  arr.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> arr[i];
}


vector<int> id;

void Process() {
    int result = 1;  id.assign(n + 2, 0); id[n + 1] = n + 1;

    for (int i = 1; i <= n; i++) id[arr[i]] = i;

    for (int i = 1; i <= n; i++) if (id[i - 1] > id[i]) result++;

    while (q--) {
        int u, v; cin >> u >> v;

        set<pair<int, int>> order;

        order.insert({arr[u] - 1, arr[u]});  order.insert({arr[u], arr[u] + 1});

        order.insert({arr[v] - 1, arr[v]});  order.insert({arr[v], arr[v] + 1});

        for (pair<int, int> e : order) if (id[e.first] > id[e.second]) result--;

        swap(id[arr[u]], id[arr[v]]); swap(arr[u], arr[v]);

        for (pair<int, int> e : order) if (id[e.first] > id[e.second]) result++;

        cout << result << '\n';
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}

