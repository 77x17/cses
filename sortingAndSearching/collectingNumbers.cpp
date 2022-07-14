#include <bits/stdc++.h>

using namespace std;


int n;  vector<int> arr;

void Input() {
    cin >> n;  arr.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> arr[i];
}


vector<int> id;

void Process() {
    int result = 1;  id.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) id[arr[i]] = i;

    for (int i = 1; i <= n; i++) if (id[i - 1] > id[i]) result++;

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
