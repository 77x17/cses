#include <bits/stdc++.h>

using namespace std;


int n;  vector<int> arr;

void Input() {
    cin >> n;  arr.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> arr[i];
}


void Process() {
    if (n == 1) {
        cout << arr[1];

        return;
    }

    long long result, sum = 0;

    for (int i = 1; i <= n; i++) sum += arr[i];  result = sum;

    for (int mask = 1; mask < (1 << n) - 1; mask++) {
        long long temp = 0;

        for (int i = 1; i < n; i++) {
            if (mask & (1 << (i - 1))) temp += arr[i];
        }

        result = min(result, abs(sum - 2 * temp));
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
