#include <bits/stdc++.h>

using namespace std;


int n, x;  vector<int> arr;

void Input() {
    cin >> n >> x;  arr.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> arr[i];
}


void Process() {
    sort(arr.begin() + 1, arr.end());

    int result = 0;

    for (int r = n, l = 1; r >= l; r--, result++) {
        long long total = arr[r];

        if (total + arr[l] <= x) total += arr[l],  l++;
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
