#include <bits/stdc++.h>

using namespace std;


int n;  vector<int> arr;

void Input() {
    cin >> n;  arr.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> arr[i];
}


void Process() {
    sort(arr.begin() + 1, arr.end());

    if (n & 1) {
        long long result = 0;

        int mid = arr[n / 2 + 1];

        for (int i = 1; i <= n; i++) result += abs(mid - arr[i]);

        cout << result << '\n';
    } else {
        long long result[2] = {0, 0};

        int mid[2] = {arr[n / 2], arr[n / 2 + 1]};

        for (int i = 1; i <= n; i++) result[0] += abs(mid[0] - arr[i]);

        for (int i = 1; i <= n; i++) result[1] += abs(mid[1] - arr[i]);

        cout << min(result[0], result[1]) << '\n';
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
