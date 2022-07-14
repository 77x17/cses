#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;


int n;  vector<int> arr;

void Input() {
    cin >> n;  arr.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> arr[i];
}


void Process1() {
    long long result = -INF, sum = 0;

    for (int l = 1, r = 1; l <= n; l++) {
        sum -= arr[l - 1];

        while (l < r && arr[r - 1] < 0) sum -= arr[r-- - 1];

        if (l == r) sum = arr[l], r++;

        result = max(result, sum);

        while (r <= n && sum + arr[r] > 0) {
            sum += arr[r++];

            result = max(result, sum);
        }
    }

    cout << result << '\n';
}


void Process2() {
    vector<long long> f(arr.begin(), arr.end());

    long long result = -INF;

    for (int i = 1; i <= n; i++) f[i] += f[i - 1];

    set<long long> order;  order.insert(0);

    for (int i = 1; i <= n; i++) {
        result = max(result, f[i] - *order.begin());

        order.insert(f[i]);
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    // Process1();
    /* or */
    Process2();

    return 0;
}
