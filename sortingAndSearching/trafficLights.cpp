#include <bits/stdc++.h>

using namespace std;


int x, n, arr[200001];

void Input() {
    cin >> x >> n;  for (int i = 1; i <= n; i++) cin >> arr[i];
}

set<int> lights;
multiset<int> lengths;

void Process() {
    lengths.insert(x);  lights.insert(0);  lights.insert(x);

    for (int i = 1; i <= n; i++) {
        set<int>::iterator r = lights.lower_bound(arr[i]);

        set<int>::iterator l = r;  l--;

        lights.insert(arr[i]);

        lengths.erase(lengths.find(*r - *l));

        lengths.insert(arr[i] - *l);  lengths.insert(*r - arr[i]);

        cout << *lengths.rbegin() << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
