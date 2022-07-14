#include <bits/stdc++.h>

using namespace std;


int n;  set<int> arr;

void Input() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int e; cin >> e;  arr.insert(e);
    }
}


void Process() {
    cout << arr.size() << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
