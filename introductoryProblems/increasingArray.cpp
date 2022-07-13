#include <bits/stdc++.h>

using namespace std;


int n;  vector<int> arr;

void Input() {
    cin >> n;  arr.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> arr[i];
}


void Process() {
    long long result = 0;

    for (int i = 1; i <= n; i++) if (arr[i - 1] > arr[i]) {
        result += arr[i - 1] - arr[i],  arr[i] = arr[i - 1];
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
